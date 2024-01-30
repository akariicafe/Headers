@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AXImageMonitor, OS_dispatch_source;

@interface AXCodeLoader : NSObject <AXImageMonitorObserver> {
    id<AXImageMonitor> _imageMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;
    long long _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSMutableSet *_trackedCodeItems;
    NSMutableSet *_accessibilityCodeItems;
    id /* block */ _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;
    BOOL _initialLoadHasOccurred;
    BOOL _initialLoadHasFinished;
    NSString *_currentPlatformKey;
}

@property (nonatomic) long long trackingMode;
@property (readonly, nonatomic) BOOL isTrackingLoadedCodeItems;
@property (readonly, nonatomic) BOOL isInitialLoadFinished;
@property (nonatomic) BOOL shouldAutoloadAccessibilityCodeItems;
@property (copy, nonatomic) id /* block */ shouldLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) id /* block */ didLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) id /* block */ loadEventWillOccurBlock;
@property (copy, nonatomic) id /* block */ loadEventDidOccurBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLoader;

- (id)initWithImageMonitor:(id)a0;
- (id)_platformKeyForPlatform:(unsigned int)a0;
- (void)_loadAccessibilityCodeItems;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)a0;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (id)_accessibilityBundleMapURLs;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)a0;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (id)_accessibilityCodeItemMatchingName:(id)a0 type:(long long)a1 path:(id)a2;
- (id /* block */)_validLoadEventWillOccurBlock;
- (id /* block */)_validShouldLoadAccessibilityCodeItemBlock;
- (id /* block */)_validDidLoadAccessibilityCodeItemBlock;
- (id /* block */)_validLoadEventDidOccurBlock;
- (void)_addTrackedCodeItem:(id)a0;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)a0;
- (void)imageMonitor:(id)a0 didAddImage:(id)a1;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (void)iterateInitialImageListForImageMonitor:(id)a0;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)a0 completion:(id /* block */)a1 targetQueue:(id)a2;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (void)endTrackingLoadedCodeItemsWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (void)_cancelDyldImageActivityTimer;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)a0 completion:(id /* block */)a1;
- (id)_stateDescForItem:(id)a0;
- (id)recomputedCodeItemsForAllFrameworks;
- (void)logLoaderState;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)accessibilityCodeItemDefinitions;
- (id)trackedCodeItems;
- (id)rogueAccessibilityCodeItems;
- (id)init;
- (void).cxx_destruct;
- (id)codeItemForBundle:(id)a0;

@end
