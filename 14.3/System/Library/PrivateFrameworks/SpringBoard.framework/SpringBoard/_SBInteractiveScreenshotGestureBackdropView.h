@class CABackdropLayer;

@interface _SBInteractiveScreenshotGestureBackdropView : UIView

@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

@end
