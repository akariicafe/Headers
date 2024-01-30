@class NSIndexSet, NSString;

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage> {
    NSString *_prefix;
}

@property (class, readonly, nonatomic) NSIndexSet *rankableGadgetTypes;
@property (class, readonly, nonatomic) PXForYouGadgetRankStorage *defaultStorage;
@property (class, readonly, nonatomic) PXForYouGadgetRankStorage *customStorage;

- (void)setRank:(long long)a0 forGadgetType:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_keyForGadgetType:(unsigned long long)a0;
- (void)resetStoredRanks;
- (id)_initWithPrefix:(id)a0;
- (BOOL)hasAnyStoredRank;
- (long long)rankForGadgetType:(unsigned long long)a0;
- (unsigned long long)gadgetTypeForRank:(long long)a0;

@end
