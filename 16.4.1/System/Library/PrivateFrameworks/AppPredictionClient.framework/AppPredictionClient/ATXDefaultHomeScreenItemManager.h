@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_path;
}

+ (id)sharedInstance;

- (id)initWithPath:(id)a0;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 completionHandler:(id /* block */)a2;
- (void)_readFromFileWithCompletionHandler:(id /* block */)a0;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchDefaultStacksOfGridSize:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)writeHomeScreenUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)a0 widgetFamilyMask:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_logFetchedOnboardingStack:(id)a0;
- (id)fetchWidgetDiscoverabilityStacks;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)_generateOnboardingStacks;
- (BOOL)_doesBiomeAppLaunchDataGoBackAtLeast20Days;
- (id)_JSONCompatible:(id)a0;
- (void).cxx_destruct;

@end
