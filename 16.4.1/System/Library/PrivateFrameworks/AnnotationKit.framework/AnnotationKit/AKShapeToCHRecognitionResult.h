@class UIBezierPath, PKDrawing, AKAnnotation, CHRecognitionResult;

@interface AKShapeToCHRecognitionResult : NSObject

@property long long tag;
@property (retain) CHRecognitionResult *result;
@property (retain) UIBezierPath *doodlePath;
@property (retain) PKDrawing *inkDrawing;
@property (retain) AKAnnotation *annotation;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } doodlePathBoundsInInputView;
@property BOOL doodlePathIsPrestroked;

- (void).cxx_destruct;
- (id)initWith:(long long)a0 result:(id)a1;

@end
