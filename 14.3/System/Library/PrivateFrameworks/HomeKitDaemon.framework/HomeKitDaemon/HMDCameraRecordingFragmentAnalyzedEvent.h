@class NSString, NSUUID;

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long analysisResultCode;
@property (retain) NSUUID *clipModelID;
@property int recordingReason;

+ (id)uuid;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithSessionID:(id)a0 cameraID:(id)a1 sequenceNumber:(unsigned long long)a2;

@end
