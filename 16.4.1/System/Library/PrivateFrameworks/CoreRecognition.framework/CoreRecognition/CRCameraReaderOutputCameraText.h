@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString *overlayString;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly) float rotation;

- (void)setRotation:(float)a0;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
