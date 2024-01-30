@interface NMSRecommendationMediaItemGroup : NMSMediaItemGroup

- (id)itemList;
- (BOOL)isEstimate;
- (id)recommendation;
- (id)_fetchDownloadableItemsForIDs:(id)a0;
- (id)identifiersForContainerType:(unsigned long long)a0;

@end
