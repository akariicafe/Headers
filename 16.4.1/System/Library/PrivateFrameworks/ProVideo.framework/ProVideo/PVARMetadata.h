@class ARFrame, AVDepthData;

@interface PVARMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (readonly, nonatomic) int depthFreshness;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithARFrame:(id)a0;
- (id)initWithARFrame:(id)a0 depthData:(id)a1 depthFreshness:(int)a2;

@end
