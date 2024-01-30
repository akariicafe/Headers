@class GTCaptureDescriptor, GTCaptureCompletionState;

@interface GTCaptureProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long captureState;
@property (retain, nonatomic) GTCaptureDescriptor *descriptor;
@property (retain, nonatomic) GTCaptureCompletionState *completionState;
@property (nonatomic) unsigned long long capturedCommandsBuffers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
