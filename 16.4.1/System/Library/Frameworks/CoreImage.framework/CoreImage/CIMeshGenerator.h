@class NSNumber, CIColor, NSArray;

@interface CIMeshGenerator : CIFilter

@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSArray *inputMesh;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIMesh1;
- (id)_CIMesh16;
- (id)_CIMesh2;
- (id)_CIMesh32;
- (id)_CIMesh4;
- (id)_CIMesh8;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extentOfMeshStart:(int)a0 count:(int)a1 halfWidth:(double)a2;

@end
