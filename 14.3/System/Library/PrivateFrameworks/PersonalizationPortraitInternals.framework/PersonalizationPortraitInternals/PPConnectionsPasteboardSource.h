@class NSString, NSOperationQueue, NSLocale, NSObject, NSCache;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    unsigned long long _pasteboardNotificationState;
    NSCache *_cache;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)validUTTypes;
- (id)init;
- (void).cxx_destruct;
- (id)fetchedPasteboardItem;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (void)dealloc;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (void)_setMostRecentPasteboardItem:(id)a0;
- (id)addressPasteboardTextItemFromNotification:(BOOL)a0;
- (id)cacheValueForKey:(id)a0;
- (id)_mostRecentPasteboardItem;
- (void)setPasteboardTextForTesting:(id)a0;
- (void)setTestLocale:(id)a0;
- (id)supportedSemanticTags;
- (void)refreshMostRecentPasteboardItemFromNotification:(BOOL)a0 explanationSet:(id)a1;
- (void)setCacheObject:(id)a0 forKey:(id)a1;
- (id)identifier;

@end
