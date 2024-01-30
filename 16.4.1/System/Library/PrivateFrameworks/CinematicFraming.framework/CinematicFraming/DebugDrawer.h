@class FrameUndistortionSession, NSArray, CinematicFramingSessionOptions;

@interface DebugDrawer : NSObject {
    int _mode;
    FrameUndistortionSession *_undisortionSession;
    NSArray *_detectionsThisFrame;
    NSArray *_deadbandSubjects;
    NSArray *_tracksThisFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _displayRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _deadband;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _idealDeadband;
    struct { struct { void /* unknown type, empty encoding */ topLeft; void /* unknown type, empty encoding */ topRight; void /* unknown type, empty encoding */ bottomLeft; void /* unknown type, empty encoding */ bottomRight; } corners; } _backProjectedViewportQuadrilateral;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _subjectRect;
    struct { struct { void /* unknown type, empty encoding */ topLeft; void /* unknown type, empty encoding */ topRight; void /* unknown type, empty encoding */ bottomLeft; void /* unknown type, empty encoding */ bottomRight; } corners; } _forwardProjectedSubjectQuadrilateral;
    float _forwardProjectedSubjectOccupancyFraction;
    void /* unknown type, empty encoding */ _focusPoint;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (retain, nonatomic) FrameUndistortionSession *undistortionSession;

- (void)dealloc;
- (void)registerTarget:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)registerTracks:(id)a0;
- (void)drawDebugOnto:(struct __CVBuffer { } *)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onto:(struct __CVBuffer { } *)a1 color:(int)a2;
- (id)initWithUndistortionSession:(id)a0 mode:(int)a1;
- (void)registerBackProjectedViewportQuadrilateral:(struct { struct { } x0; })a0;
- (void)registerCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerDeadbandSubjects:(id)a0;
- (void)registerDetections:(id)a0;
- (void)registerDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerFocusPoint:(SEL)a0;
- (void)registerForwardProjectedSubjectOccupancyFraction:(float)a0;
- (void)registerForwardProjectedSubjectQuadrilateral:(struct { struct { } x0; })a0;
- (void)registerIdealDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerSubjectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
