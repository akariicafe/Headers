@class NSArray, NSSet;

@interface PLCloudDownloadBatchDetails : NSObject

@property (nonatomic) BOOL hasResourceChanges;
@property (nonatomic) BOOL needsWidgetTimelineReload;
@property (nonatomic) long long numberOfPhotos;
@property (nonatomic) long long numberOfVideos;
@property (copy, nonatomic) NSArray *cmmUUIDsToNotify;
@property (copy, nonatomic) NSSet *confirmedResourceIDs;

- (void).cxx_destruct;
- (void)unionBatchDetails:(id)a0;

@end
