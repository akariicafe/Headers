@class UIPanGestureRecognizer, NSObject, UISegmentedControl, UIView, UILabel, UIDebuggingZoomLineView, UIDebuggingZoomLoupeView;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingZoomDelegate, UIDebuggingInformationViewController>

@property (nonatomic) unsigned long long currentDirection;
@property (retain, nonatomic) UIDebuggingZoomLoupeView *loupe;
@property (retain, nonatomic) UIDebuggingZoomLineView *lineView;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGImage { } *image;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UISegmentedControl *directionSegmentedControl;
@property (nonatomic) BOOL useViewForEdges;
@property (retain, nonatomic) UIView *lastViewSeen;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)drawLinesAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)drawViewLinesAtPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (struct CGImage { } *)newCaptureSnapshotAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 window:(id)a1;
- (void)toggleDirection:(id)a0;
- (void)toggleMeasuring:(id)a0;
- (void)toggleMode:(id)a0;
- (void)updateGesture:(id)a0;

@end
