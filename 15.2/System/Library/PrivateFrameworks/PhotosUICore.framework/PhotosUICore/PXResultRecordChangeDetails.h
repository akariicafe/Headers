@class PXResultRecord, PHFetchResultChangeDetails;

@interface PXResultRecordChangeDetails : NSObject

@property (readonly, nonatomic) PXResultRecord *resultRecordBeforeChanges;
@property (readonly, nonatomic) PXResultRecord *resultRecordAfterChanges;
@property (readonly, nonatomic) PHFetchResultChangeDetails *exposedFetchResultChangeDetails;
@property (readonly, nonatomic) PHFetchResultChangeDetails *keyAssetsFetchResultChangeDetails;

+ (id)resultRecordChangeDetailsFor:(id)a0 withChange:(id)a1;

- (id)description;
- (id)initWithResultRecordBeforeChanges:(id)a0 resultRecordAfterChanges:(id)a1 exposedFetchResultChangeDetails:(id)a2 keyAssetsFetchResultChangeDetails:(id)a3;
- (void).cxx_destruct;

@end
