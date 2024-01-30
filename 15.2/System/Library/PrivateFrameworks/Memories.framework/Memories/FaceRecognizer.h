@interface FaceRecognizer : VEiOSSharedObject

@property (nonatomic) BOOL highAccuracy;

+ (id)sharedRecognizer;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containingRectForFaces:(id)a0 scaleEachFaceRectBy:(double)a1;
- (id)facesInImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containingRect:(id)a0;

@end
