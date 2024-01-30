@interface NMSRecommendationMediaItemGroup : NMSMediaItemGroup

- (id)itemList;
- (BOOL)isEstimate;
- (id)recommendation;
- (id)identifiersForContainerType:(unsigned long long)a0;
- (id)_fetchDownloadInfoForItems:(id)a0;

@end
