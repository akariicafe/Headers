@class CKFetchRecordZoneChangesConfiguration;

@interface CKSyncEngineFetchRecordZoneChangesConfiguration : NSObject

@property (retain, nonatomic) CKFetchRecordZoneChangesConfiguration *configuration;
@property (nonatomic) BOOL shouldFetchAssetContents;

- (id)init;
- (void).cxx_destruct;

@end
