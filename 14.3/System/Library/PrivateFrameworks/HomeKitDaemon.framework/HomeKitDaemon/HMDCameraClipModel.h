@class NSUUID, NSString, NSData, NSDate, HMBModelCountMatchesQuery, NSArray, HMBStreamingAsset, NSNumber, HMBModelInfiniteQuery;

@interface HMDCameraClipModel : HMBModel

@property (class, readonly) NSUUID *sentinelParentUUID;
@property (class, readonly, nonatomic) HMBModelInfiniteQuery *incompleteClipsQuery;
@property (class, readonly, nonatomic) HMBModelInfiniteQuery *clipsWithNeedsUploadFeedbackStatusQuery;
@property (class, readonly, nonatomic) HMBModelCountMatchesQuery *countOfClipsBetweenDatesQuery;

@property (retain, nonatomic) NSNumber *feedbackStatusField;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSNumber *isComplete;
@property unsigned long long feedbackStatus;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *targetFragmentDuration;
@property (retain, nonatomic) NSNumber *maximumClipDuration;
@property (retain, nonatomic) NSNumber *recordedLocally;
@property (retain, nonatomic) NSString *streamingAssetVersion;
@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSNumber *encryptionScheme;
@property (retain, nonatomic) HMBStreamingAsset *videoStreamingAsset;
@property (retain, nonatomic) NSArray *videoMetadata;
@property (retain, nonatomic) NSArray *videoMetadataArray;
@property (retain, nonatomic) HMBStreamingAsset *posterFramesStreamingAsset;
@property (retain, nonatomic) NSArray *posterFramesMetadata;
@property (retain, nonatomic) NSArray *posterFramesMetadataArray;

+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)hmbExternalRecordType;
+ (id)clipsBetweenDatesQueryWithIsAscending:(BOOL)a0;

- (id)createClipWithSignificantEvents:(id)a0;

@end
