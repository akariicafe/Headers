@class NSNumber;

@interface CITile2Filter : CITileFilter

@property (retain, nonatomic) NSNumber *inputAcuteAngle;

+ (id)customAttributes;

- (id)outputImage;
- (double)_roiArea;
- (struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; })_roiCenter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_roiRect;
- (id)_singlePixelImage;

@end
