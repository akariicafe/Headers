@class NSTimer;

@interface SSPanningScrollView : UIScrollView {
    long long mPanningMode;
    NSTimer *mPanningTimer;
    BOOL _leftPanActive;
    BOOL _rightPanActive;
    BOOL _topPanActive;
    BOOL _bottomPanActive;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomRect;
}

@property long long panningMode;
@property BOOL disablePanningEvents;
@property BOOL showDisconnectedBlurring;
@property struct CGPoint { double x; double y; } lastPoint;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)commonInitialization;
- (void)setupTrackingArea;
- (void)restoreScrollPoint;
- (void)updateTrackingAreas;
- (void)scrollToCursor:(struct CGPoint { double x0; double x1; })a0 animate:(BOOL)a1;

@end
