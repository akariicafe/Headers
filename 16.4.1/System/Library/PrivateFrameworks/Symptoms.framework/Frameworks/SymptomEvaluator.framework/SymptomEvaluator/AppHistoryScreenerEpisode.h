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
+ (double)_energyTaxBracketFor:(unsigned long long)a0;
+ (void)_setCustomLearningResetAt:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_fetchWithLabel:(id)a0 exportLabel:(id)a1;
- (id)_getPvar;
- (void)accrueReward:(float)a0;
- (void)accrueRewardFromFlow:(id)a0;
- (BOOL)canAcceptEpisodeWithRedactionAndTax;
- (float)computeReward;
- (id)initWithLabel:(id)a0 exportLabel:(id)a1;

@end
