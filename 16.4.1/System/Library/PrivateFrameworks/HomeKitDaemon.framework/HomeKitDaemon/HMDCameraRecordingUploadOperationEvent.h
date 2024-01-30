@class NSString, NSUUID;

@interface HMDCameraRecordingUploadOperationEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property double runTime;
@property (readonly) unsigned long long runTimeInMilliseconds;
@property unsigned long long operationType;
@property BOOL didCausePreviousClipToFinalizeDueToDurationLimit;
@property (readonly) unsigned long long totalClipDurationMilliseconds;
@property double totalClipDuration;
@property unsigned long long retryCount;
@property (readonly, copy) NSUUID *clipModelID;
@property (readonly) unsigned long long startTimestamp;

+ (int)awdOperationEnumFromCameraClipOperationType:(unsigned long long)a0;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithClipModelID:(id)a0 operation:(id)a1;
- (id)metricForAWD;

@end
