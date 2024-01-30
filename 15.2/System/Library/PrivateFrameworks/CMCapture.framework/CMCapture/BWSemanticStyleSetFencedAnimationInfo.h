@class FigCaptureSemanticStyleSet;

@interface BWSemanticStyleSetFencedAnimationInfo : BWFencedAnimationInfo

@property (readonly) FigCaptureSemanticStyleSet *semanticStyleSet;

+ (id)fencedAnimationInfoWithSemanticStyleSet:(id)a0 fencePortSendRight:(id)a1;

- (id)description;
- (void)dealloc;
- (id)initWithSemanticStyleSet:(id)a0 fencePortSendRight:(id)a1;

@end
