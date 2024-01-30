@class NSString, REUpNextScheduler, NSREDataSourceModel, REUpNextTimer;

@interface NSREDataSource : REElementDataSource <NSREDataSourceModelDelegate>

@property (retain, nonatomic) NSREDataSourceModel *model;
@property (retain, nonatomic) REUpNextTimer *sunriseTimer;
@property (retain, nonatomic) REUpNextTimer *sunsetTimer;
@property (retain, nonatomic) REUpNextScheduler *invalidationScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;
+ (BOOL)wantsLocationInUseAsserton;

- (void)_localeChanged:(id)a0;
- (void)pause;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;
- (id)supportedSections;
- (id)_elementForEvent:(id)a0;
- (id)_scheduledUpdateElementTimerFor:(id)a0;
- (void)modelUpdated:(id)a0;

@end
