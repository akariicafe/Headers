@interface CHStarRecognitionResult : CHSketchRecognitionResult

@property (readonly) struct CGPoint { double x; double y; } center;
@property (readonly) struct CGSize { double width; double height; } size;

- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2 center:(struct CGPoint { double x0; double x1; })a3 size:(struct CGSize { double x0; double x1; })a4;

@end
