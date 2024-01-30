@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_path;
}

+ (id)sharedInstance;

- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;
- (id)initWithPath:(id)a0;
- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)a0 widgetFamilyMask:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_readFromFileWithCompletionHandler:(id /* block */)a0;
- (BOOL)_doesBiomeAppLaunchDataGoBackAtLeast20Days;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 completionHandler:(id /* block */)a2;
- (void)writeHomeScreenUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (id)_JSONCompatible:(id)a0;
- (void)fetchDefaultStacksOfGridSize:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_logFetchedOnboardingStack:(id)a0;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_generateOnboardingStacks;
- (id)fetchWidgetDiscoverabilityStacks;

@end
