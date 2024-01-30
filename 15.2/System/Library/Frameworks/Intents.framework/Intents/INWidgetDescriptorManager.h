@class NSObject, NSSet, NSString, CHSAvocadoDescriptorProvider, NSMutableArray, INWatchdogTimer;
@protocol OS_dispatch_queue;

@interface INWidgetDescriptorManager : NSObject <CHSAvocadoDescriptorProviderObserver> {
    CHSAvocadoDescriptorProvider *_provider;
    BOOL _observing;
    NSMutableArray *_completionHandlers;
    INWatchdogTimer *_watchdogTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSSet *widgetDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)descriptorsDidChangeForAvocadoDescriptorProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)getDescriptorsWithCompletionHandler:(id /* block */)a0;
- (void)getDescriptorForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startObservingDescriptors;
- (void)_notifyCompletionHandlersWithWidgetDescriptors:(id)a0;
- (void)dealloc;

@end
