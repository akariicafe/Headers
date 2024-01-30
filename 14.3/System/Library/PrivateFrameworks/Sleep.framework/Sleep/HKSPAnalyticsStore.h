@protocol HKSPUserDefaults;

@interface HKSPAnalyticsStore : NSObject

@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 diagnosticsOptInStatusProvider:(id /* block */)a1;
- (void)_setWindDownActions:(id)a0 forMorningIndex:(long long)a1 overwriteExisting:(BOOL)a2;
- (id)readAllWindDownActions;
- (id)windDownActionsAfterMorningIndex:(long long)a0;
- (void)writeWindDownActions:(id)a0;
- (void)setBaselineForWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (void)updateWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (id)windDownActionsForMorningIndex:(long long)a0;
- (id)uncollectedWindDownActions;
- (void)markAllActionsAsCollected;
- (void)removeAllWindDownActionsBeforeMorningIndex:(long long)a0;
- (id)initWithUserDefaults:(id)a0;

@end
