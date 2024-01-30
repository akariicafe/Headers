@class CAMCaptureCoordinationInfo;

@interface CAMCaptureResponse : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 captureSession:(unsigned short)a1 coordinationInfo:(id)a2;
- (void)releaseCachedImages;

@end
