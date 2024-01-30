@class NSString;

@interface HDCloudSyncPipelineStageFetch : HDCloudSyncPipelineStage {
    NSString *_zoneOwnerName;
}

@property (nonatomic) BOOL shouldFetchSubscriptions;

- (void).cxx_destruct;
- (void)main;
- (id)_zoneOwnerNameWithError:(id *)a0;

@end
