@interface CHTriangleRecognitionResult : CHSketchRecognitionResult

@property (readonly) struct CGPoint { double x; double y; } vertex1;
@property (readonly) struct CGPoint { double x; double y; } vertex2;
@property (readonly) struct CGPoint { double x; double y; } vertex3;

- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2 vertex1:(struct CGPoint { double x0; double x1; })a3 vertex2:(struct CGPoint { double x0; double x1; })a4 vertex3:(struct CGPoint { double x0; double x1; })a5;

@end
