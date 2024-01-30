@class OKTimerAnimation, NSString, OKPageViewController, NSTimer, UIScrollView, NSMutableArray, NSMutableDictionary;

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <OKNavigatorScrollViewControllerProxyExport, UIScrollViewDelegate> {
    OKPageViewController *_pageViewController;
    UIScrollView *_scrollView;
    double _velocityTimestamp;
    double _currentVelocity;
    double _currentTilt;
    double _currentRotationZ;
    NSTimer *_autopanningTimer;
    double _velocity2;
    NSMutableArray *_registeredObjects;
    NSMutableDictionary *_registeredActions;
    NSString *_viewDidScrollActionScript;
    struct CGPoint { double x; double y; } _lastOffset;
    OKTimerAnimation *_scrollingAnimation;
}

@property (nonatomic) double velocity;
@property (nonatomic) double tilt;
@property (nonatomic) double rotationZ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (struct CGPoint { double x0; double x1; })contentOffset;
- (BOOL)prepareForDisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)triggerAction;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateParallax;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (struct CGSize { double x0; double x1; })layoutFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visiblePageRect;
- (void)applySettings;
- (void)cancelCouchPotatoPlayback;
- (void)navigateToItemAtKeyPath:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updatePageViewController;
- (void)cleanupScrollEvents;
- (void)navigateToWidgetWithName:(id)a0 animated:(BOOL)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)navigateToOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 duration:(double)a2 timingFunctionName:(id)a3 completion:(id /* block */)a4;
- (id)sectorKeysForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)keyForOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct _OKEventElement { struct CGPoint { double x0; double x1; } x0; unsigned long long x1; unsigned long long x2; long long x3; id x4; struct _OKEventElement *x5; struct _OKEventElement *x6; } *)createElementWithObject:(id)a0 atOffset:(struct CGPoint { double x0; double x1; })a1 withProbability:(unsigned long long)a2 withLimit:(unsigned long long)a3;
- (struct _OKEventList { unsigned long long x0; struct _OKEventElement *x1; struct _OKEventElement *x2; } *)createList;
- (void)insertElement:(struct _OKEventElement { struct CGPoint { double x0; double x1; } x0; unsigned long long x1; unsigned long long x2; long long x3; id x4; struct _OKEventElement *x5; struct _OKEventElement *x6; } *)a0 inList:(struct _OKEventList { unsigned long long x0; struct _OKEventElement *x1; struct _OKEventElement *x2; } *)a1;
- (void)deleteElement:(struct _OKEventElement { struct CGPoint { double x0; double x1; } x0; unsigned long long x1; unsigned long long x2; long long x3; id x4; struct _OKEventElement *x5; struct _OKEventElement *x6; } *)a0 inList:(struct _OKEventList { unsigned long long x0; struct _OKEventElement *x1; struct _OKEventElement *x2; } *)a1;
- (void)doMotionAction:(id)a0;
- (void)doPanAction:(id)a0;
- (void)setSettingContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)doApplyMotion:(id)a0;
- (void)scrollViewDidScrollProxy;
- (void)registerObjectOnScrollingEvent:(id)a0;
- (void)registerObject:(id)a0 forActionAtOffset:(struct CGPoint { double x0; double x1; })a1 probability:(unsigned long long)a2 andLimit:(unsigned long long)a3;
- (void)removeRegisteredObject:(id)a0 forActionAtOffset:(struct CGPoint { double x0; double x1; })a1 continuous:(BOOL)a2;
- (id)settingViewDidScrollActionScript;
- (void)setSettingViewDidScrollActionScript:(id)a0;
- (void)doSwipeAction:(id)a0;

@end
