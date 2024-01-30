@class NSURL;

@interface GTCaptureCompletionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long framesCaptured;
@property (readonly, nonatomic) unsigned long long commandBuffersCaptured;
@property (readonly, nonatomic) NSURL *archiveURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 frames:(unsigned long long)a1 commandBuffers:(unsigned long long)a2;

@end
