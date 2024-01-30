@class NSString;

@interface HMDCameraRecordingBulkSendDataReadEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long byteCount;
@property unsigned short status;
@property unsigned long long chunkSequenceNumber;
@property (readonly) unsigned long long bitRate;
@property (readonly) unsigned long long iFrameInterval;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned long long imageHeight;

+ (id)uuid;

@end
