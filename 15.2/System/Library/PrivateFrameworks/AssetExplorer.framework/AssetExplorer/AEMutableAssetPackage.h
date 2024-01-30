@interface AEMutableAssetPackage : AEAssetPackage

- (id)initWithAssetIdentifier:(id)a0;
- (void)storeURL:(id)a0 forType:(id)a1;
- (void)removeURLForType:(id)a0;
- (void)setSidecarObject:(id)a0 forKey:(id)a1;
- (void)addSidecarEntriesFromDictionary:(id)a0;
- (void)removeSidecarObjectForKey:(id)a0;
- (void)suppressURLForType:(id)a0;
- (void)expressURLForType:(id)a0;
- (id)_copyMetadataFromDisplayAsset:(id)a0;
- (void)storeMetadataFromReviewAsset:(id)a0;
- (void)storeMetadataFromPHAsset:(id)a0 imageURL:(id)a1 adjustmentURL:(id)a2;
- (void)beginSupressingLivePhoto;
- (void)endSuppressingLivePhoto;
- (void)setMediaOrigin:(long long)a0;

@end
