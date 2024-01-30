@class NSUUID, NWPVarBandit, NSMutableArray;

@interface AppHistoryScreenerEpisode : NSObject {
    NWPVarBandit *pvar;
    NSUUID *genID;
    double baselineCeilingRx;
    double baselineCeilingTx;
    NSMutableArray *partialRewards;
    NSMutableArray *partialCeilingLifts;
    unsigned long long dataVolume;
    double energyTaxBracket;
}

@property BOOL screenIn;

+ (void)_setCustomBackingStore:(id)a0;
+ (void)_setCustomLearningResetAt:(unsigned long long)a0;
+ (double)_energyTaxBracketFor:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_getPvar;
- (void)accrueRewardFromFlow:(id)a0;
- (id)initWithLabel:(id)a0 exportLabel:(id)a1;
- (id)_fetchWithLabel:(id)a0 exportLabel:(id)a1;
- (BOOL)canAcceptEpisodeWithRedactionAndTax;
- (float)computeReward;
- (void)accrueReward:(float)a0;

@end
