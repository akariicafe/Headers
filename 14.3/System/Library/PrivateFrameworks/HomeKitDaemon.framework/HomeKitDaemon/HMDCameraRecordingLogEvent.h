@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMDLogEvent

@property (readonly, copy) NSUUID *cameraID;
@property (readonly, copy) NSUUID *sessionID;
@property unsigned long long sequenceNumber;
@property (readonly, copy) NSUUID *ephemeralCameraID;
@property (readonly) unsigned long long startTimestamp;
@property (readonly) unsigned long long endTimestamp;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEventType:(id)a0 sessionID:(id)a1 cameraID:(id)a2 sequenceNumber:(unsigned long long)a3;

@end
