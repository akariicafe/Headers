@class NSMutableDictionary;

@interface FTCinematicHighPriorityTrackerState : NSObject {
    struct shared_ptr<ft::CinematicTracker> { struct CinematicTracker *__ptr_; struct __shared_weak_count *__cntrl_; } _tracker;
    struct shared_ptr<ft::Frame> { struct Frame *__ptr_; struct __shared_weak_count *__cntrl_; } _frame;
    BOOL _isTapToTrack;
    BOOL _finalized;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) long long op;
@property (retain, nonatomic) NSMutableDictionary *sessionStorage;

- (void)abort;
- (BOOL)completed;
- (void)_setup;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)preProcessExemplarInputFromSourceBuffer:(SEL)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 forTargetRect:(struct __CVBuffer { } *)a2 meanPixel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scaler:(id)a4;
- (BOOL)preProcessInstanceInputFromSourceBuffer:(SEL)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 meanPixel:(struct __CVBuffer { } *)a2 scaler:(id)a3;
- (BOOL)postProcessExemplarOutputs:(id)a0 forTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)postProcessInstanceOutputs:(id)a0;
- (void)_setupOp;
- (void)_setupSessionStorage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })exemplarInputRoiForTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_unsafeMeanFillAndScaleSourceBuffer:(SEL)a0 destinationBuffer:(struct __CVBuffer { } *)a1 sourceRect:(struct __CVBuffer { } *)a2 meanPixel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scaler:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })instanceInputRoi;
- (BOOL)_validatePostProcessingInvocation;
- (BOOL)_updateHighPriorityTrackWithRect:(struct Rect<double> { double x0; double x1; double x2; double x3; })a0 confidence:(double)a1 isTapToTrack:(BOOL)a2;
- (id)initWithTracker:(struct shared_ptr<ft::CinematicTracker> { struct CinematicTracker *x0; struct __shared_weak_count *x1; })a0 frame:(struct shared_ptr<ft::Frame> { struct Frame *x0; struct __shared_weak_count *x1; })a1;
- (id)opDescription;

@end
