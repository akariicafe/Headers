@class NSURL, NSMutableDictionary, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject

@property (readonly, nonatomic) NSURL *persistentStoreURL;
@property (readonly, nonatomic) NSMutableDictionary *momentAssetPairsByNodeUUID;
@property (readonly, nonatomic) NSMutableDictionary *curationInformationByNodeUUID;
@property (readonly, nonatomic) NSMutableDictionary *locationInformationByNodeUUID;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)initWithManager:(id)a0;
- (void)invalidateCache;
- (void)setKeyAssetLocalIdentifier:(id)a0 forNodeIdentifier:(id)a1 withAssociatedMomentUUID:(id)a2;
- (id)locationInformationForLocationNode:(id)a0 locationMask:(unsigned long long)a1;
- (id)curationInformationForNode:(id)a0;
- (void).cxx_destruct;
- (void)save;
- (id)keyAssetLocalIdentifierForNodeIdentifier:(id)a0 withAssociatedMomentUUIDs:(id)a1;
- (void)setCurationInformation:(id)a0 forNode:(id)a1;
- (BOOL)momentAssetPairs:(id)a0 areValidWithAssociatedMomentUUIDs:(id)a1;
- (void)setLocationInformation:(id)a0 forLocationNode:(id)a1 locationMask:(unsigned long long)a2;

@end
