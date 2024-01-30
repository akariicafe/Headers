@class CIImage, NSArray;

@interface TCMPSLabeledImage : NSObject

@property (retain, nonatomic) CIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (retain, nonatomic) NSArray *annotations;

- (void).cxx_destruct;

@end
