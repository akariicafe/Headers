@interface CIBurstFaceConfigEntry : NSObject

@property int faceId;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property int framesSinceLast;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFaceId:(int)a1;

@end
