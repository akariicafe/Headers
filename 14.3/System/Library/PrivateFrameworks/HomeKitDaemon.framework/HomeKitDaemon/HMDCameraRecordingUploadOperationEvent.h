@class NSString, NSUUID, NSError, NSDate;

@interface HMDCameraRecordingUploadOperationEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property double runTime;
@property (readonly) unsigned long long runTimeInMilliseconds;
@property int operationType;
@property BOOL didCausePreviousClipToFinalizeDueToDurationLimit;
@property (retain) NSError *error;
@property (readonly) unsigned long long totalClipDurationMilliseconds;
@property double totalClipDuration;
@property unsigned long long retryCount;
@property (readonly) unsigned long long operationStartTime;
@property (retain) NSDate *operationStartDate;
@property (readonly, copy) NSUUID *clipModelID;
@property (readonly) unsigned long long startTimestamp;

+ (id)uuid;
+ (int)operationTypeFromOperation:(id)a0;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithClipModelID:(id)a0 operation:(id)a1;

@end
