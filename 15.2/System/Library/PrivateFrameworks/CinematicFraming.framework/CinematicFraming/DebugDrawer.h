@class FrameUndistortionSession, NSArray, CinematicFramingSessionOptions;

@interface DebugDrawer : NSObject {
    NSArray *_detectionsThisFrame;
    NSArray *_deadbandSubjects;
    NSArray *_tracksThisFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _displayRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _deadband;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _idealDeadband;
    FrameUndistortionSession *_undisortionSession;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *sessionOptions;
@property (retain, nonatomic) FrameUndistortionSession *undistortionSession;

- (void).cxx_destruct;
- (void)registerTarget:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithUndistortionSession:(id)a0;
- (void)registerTracks:(id)a0;
- (void)registerDetections:(id)a0;
- (void)registerCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerDeadbandSubjects:(id)a0;
- (void)registerDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerIdealDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawDebugOnto:(struct __CVBuffer { } *)a0;

@end
