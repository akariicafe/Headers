@interface PLLivePhotoPairingProcessor : PLPairingProcessor

- (id)groupIDForAsset:(id)a0;
- (id)firstGroupFromAssets:(id)a0;
- (id)combinePair:(id)a0 error:(id *)a1;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)a0;
- (id)livePhotoFetchRequestWithPredicate:(id)a0;

@end
