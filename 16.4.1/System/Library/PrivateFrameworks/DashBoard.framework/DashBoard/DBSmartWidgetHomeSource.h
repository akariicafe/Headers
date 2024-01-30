@class DBHomeManager, NSString;

@interface DBSmartWidgetHomeSource : DBSmartWidgetSource <DBHomeManagerObserver, DBHomeObserver>

@property (readonly, nonatomic) DBHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceName;
+ (void)load;
+ (id)predictionClasses;

- (void)dealloc;
- (void).cxx_destruct;
- (id)freshPredictions;
- (void)home:(id)a0 didUpdateLastUsedServiceOfType:(id)a1;
- (void)homeDidChangeInRange:(id)a0;
- (void)homeDidEnterExtendedRange:(id)a0;
- (void)homeDidExitExtendedRange:(id)a0;
- (void)homeManager:(id)a0 didUpdateHomes:(id)a1;
- (void)homeManager:(id)a0 willRemoveHomes:(id)a1;
- (id)initWithDelegate:(id)a0 resourceProvider:(id)a1;

@end
