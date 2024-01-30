@protocol HKSPUserDefaults;

@interface _HKSPUserDefaultsStatePersistence : NSObject <HKSPStatePersistence>

@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;

- (void).cxx_destruct;
- (BOOL)savePersistentState:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)loadPersistentStateForIdentifier:(id)a0 error:(id *)a1;
- (id)initWithUserDefaults:(id)a0;

@end
