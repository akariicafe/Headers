@interface NMSRecommendationMediaItemGroup : NMSMediaItemGroup

- (id)itemList;
- (id)recommendation;
- (BOOL)isEstimate;
- (id)identifiersForContainerType:(unsigned long long)a0;
- (id)_fetchDownloadInfoForItems:(id)a0;

@end
