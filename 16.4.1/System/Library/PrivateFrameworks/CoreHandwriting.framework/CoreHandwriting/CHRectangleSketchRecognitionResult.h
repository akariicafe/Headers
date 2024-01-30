@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult

@property (readonly) struct CGPoint { double x; double y; } upperLeftPoint;
@property (readonly) struct CGPoint { double x; double y; } upperRightPoint;
@property (readonly) struct CGPoint { double x; double y; } lowerLeftPoint;
@property (readonly) struct CGPoint { double x; double y; } lowerRightPoint;
@property (readonly) struct CGSize { double width; double height; } size;

- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2 upperLeftPoint:(struct CGPoint { double x0; double x1; })a3 upperRightPoint:(struct CGPoint { double x0; double x1; })a4 lowerLeftPoint:(struct CGPoint { double x0; double x1; })a5 lowerRightPoint:(struct CGPoint { double x0; double x1; })a6 size:(struct CGSize { double x0; double x1; })a7;

@end
