@protocol CHSChronoToolServiceServer;

@interface CHSToolSupportService : NSObject

@property (readonly, nonatomic) id<CHSChronoToolServiceServer> server;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)cacheDescriptorsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetCaches:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)disableWakeBudgetWithCompletion:(id /* block */)a0;
- (void)resetWakeBudgetWithCompletion:(id /* block */)a0;
- (void)widgetsWithTimelines:(id /* block */)a0;
- (void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)wakesRemainingForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;

@end
