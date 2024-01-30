@class NSIndexSet, NSString;

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage> {
    NSString *_prefix;
}

@property (class, readonly, nonatomic) NSIndexSet *rankableGadgetTypes;
@property (class, readonly, nonatomic) PXForYouGadgetRankStorage *defaultStorage;
@property (class, readonly, nonatomic) PXForYouGadgetRankStorage *customStorage;

- (long long)rankForGadgetType:(unsigned long long)a0;
- (void)setRank:(long long)a0 forGadgetType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasAnyStoredRank;
- (id)_initWithPrefix:(id)a0;
- (id)_keyForGadgetType:(unsigned long long)a0;
- (void)resetStoredRanks;
- (unsigned long long)gadgetTypeForRank:(long long)a0;

@end
