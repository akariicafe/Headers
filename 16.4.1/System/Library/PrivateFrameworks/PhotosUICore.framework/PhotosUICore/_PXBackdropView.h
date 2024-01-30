@class CABackdropLayer;

@interface _PXBackdropView : UIView

@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

@end
