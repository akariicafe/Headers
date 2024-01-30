@interface SUItemDataSource : NSObject

+ (id)sharedDataSource;
+ (void)setSharedDataSource:(id)a0;

- (long long)itemTypeForItem:(id)a0;
- (id)newPurchaseWithItem:(id)a0 storeOffer:(id)a1;
- (id)_newDownloadForDocumentItem:(id)a0 storeOffer:(id)a1;
- (id)_newDownloadForPodcastEpisode:(id)a0 storeOffer:(id)a1;
- (id)_newDownloadMetadataForPodcastEpisode:(id)a0 storeOffer:(id)a1;
- (id)_newTonePurchaseWithPurchase:(id)a0;
- (id)_thumbnailImageForItem:(id)a0;
- (long long)estimatedDiskSpaceNeededForItem:(id)a0 storeOffer:(id)a1;
- (long long)itemTypeForTypeString:(id)a0;
- (id)newDisplayItemValidationTestsForItem:(id)a0;
- (id)newExternalDownloadWithItem:(id)a0 storeOffer:(id)a1;
- (id)newItemWithItemDictionary:(id)a0;
- (id)typeStringForItemType:(long long)a0;

@end
