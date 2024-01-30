@interface VKFrameInfo : NSObject

@property (nonatomic) unsigned long long sceneStability;
@property (nonatomic) double luminosity;
@property (nonatomic) struct CGSize { double width; double height; } dimensions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } visionToLayerTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } visionToCroppedImageTransform;

@end
