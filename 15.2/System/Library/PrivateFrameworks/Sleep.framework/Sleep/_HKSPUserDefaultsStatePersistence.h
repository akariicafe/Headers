@protocol HKSPUserDefaults;

@interface _HKSPUserDefaultsStatePersistence : NSObject <HKSPStatePersistence>

@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;

- (id)initWithUserDefaults:(id)a0;
- (BOOL)savePersistentState:(id)a0 identifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)loadPersistentStateForIdentifier:(id)a0 allowedStates:(id)a1 error:(id *)a2;

@end
