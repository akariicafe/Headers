@class NSNumber;

@interface CITile2Filter : CITileFilter

@property (retain, nonatomic) NSNumber *inputAcuteAngle;

+ (id)customAttributes;

- (double)_roiArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_roiRect;
- (struct vec2 { float x0; float x1; })_roiCenter;
- (id)_singlePixelImage;
- (id)outputImage;

@end
