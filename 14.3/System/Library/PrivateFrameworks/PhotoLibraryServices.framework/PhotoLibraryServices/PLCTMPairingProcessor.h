@interface PLCTMPairingProcessor : PLPairingProcessor

@property (nonatomic) BOOL deferredProcessingNeeded;

- (id)groupIDForAsset:(id)a0;
- (id)firstGroupFromAssets:(id)a0;
- (id)combinePair:(id)a0 error:(id *)a1;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)a0;
- (id)ctmFetchRequestWithPredicate:(id)a0;
- (void)setDeferredProcessingIfNescessaryForAsset:(id)a0;
- (id)_mapResourcesFromSoc:(id)a0 toPrimary:(id)a1 error:(id *)a2;
- (BOOL)_copyResourcesFromSoc:(id)a0 toPrimary:(id)a1 error:(id *)a2;
- (void)_installSocResourcesFromSoc:(id)a0 toPrimary:(id)a1 referencedResourceURLs:(id)a2;

@end
