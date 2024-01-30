@class NSArray;

@interface PKTransformStrokesAnimation : NSObject {
    NSArray *_strokes;
    double _startTime;
    double _duration;
    double _fadeOutDuration;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destinationFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

- (void).cxx_destruct;

@end
