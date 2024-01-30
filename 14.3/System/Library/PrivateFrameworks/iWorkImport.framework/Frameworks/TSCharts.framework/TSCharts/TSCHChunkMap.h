@interface TSCHChunkMap : NSObject {
    unsigned long long mChunkStyle;
    unsigned long long *mSeriesMap;
    unsigned long long *mGroupsMap;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (void)p_setupCacheForSeriesWithModel:(id)a0;
- (void)p_setupCacheForSetsWithModel:(id)a0;
- (void)p_setupCacheForElementsInSeriesWithModel:(id)a0;
- (void)p_setupCacheForElementsInSetsWithModel:(id)a0;
- (BOOL)p_canAddChunkForSeries:(id)a0 groupIndex:(long long)a1;
- (id)initWithChart:(id)a0 chunkStyle:(unsigned long long)a1;
- (unsigned long long)seriesIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)groupIndexAtMapIndex:(unsigned long long)a0;

@end
