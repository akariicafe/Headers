@class PXPhotosResultRecord, PHFetchResultChangeDetails;

@interface PXPhotosResultRecordChangeDetails : NSObject

@property (readonly, nonatomic) PXPhotosResultRecord *resultRecordBeforeChanges;
@property (readonly, nonatomic) PXPhotosResultRecord *resultRecordAfterChanges;
@property (readonly, nonatomic) PHFetchResultChangeDetails *exposedFetchResultChangeDetails;
@property (readonly, nonatomic) PHFetchResultChangeDetails *keyAssetsFetchResultChangeDetails;

+ (id)resultRecordChangeDetailsFor:(id)a0 withChange:(id)a1;

- (id)initWithResultRecordBeforeChanges:(id)a0 resultRecordAfterChanges:(id)a1 exposedFetchResultChangeDetails:(id)a2 keyAssetsFetchResultChangeDetails:(id)a3;
- (id)description;
- (void).cxx_destruct;

@end
