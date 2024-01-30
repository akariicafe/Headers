@class FigCaptureMachPortSendRight;

@interface BWFencedAnimationInfo : NSObject

@property (readonly) FigCaptureMachPortSendRight *fencePortSendRight;
@property (readonly) long long fencePortGenerationCount;

- (id)description;
- (void)dealloc;
- (id)initWithFencePortSendRight:(id)a0;

@end
