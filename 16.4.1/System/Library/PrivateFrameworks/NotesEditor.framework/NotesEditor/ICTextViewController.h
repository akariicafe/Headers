@class NSDate, ICLayoutManager, ICTextViewScrollState, ICViewControllerManager, UIColor, NSLayoutConstraint, NSString, ICTextView, ICNote, NSMutableSet, NSArray, ICAttributionSidebarView, ICTextController, ICTextBackgroundView;

@interface ICTextViewController : UIViewController <NSLayoutManagerDelegate>

@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICTextController *textController;
@property (retain, nonatomic) ICTextView *textView;
@property (nonatomic) double initialContainerWidth;
@property (readonly, nonatomic) ICLayoutManager *layoutManager;
@property (copy, nonatomic) id /* block */ splitViewControllerDidEndAnimatedTransitionToStateRequestHandler;
@property (retain, nonatomic) ICTextViewScrollState *transitionScrollState;
@property (retain, nonatomic) ICTextViewScrollState *initialScrollState;
@property (retain, nonatomic) NSArray *transitionConstraints;
@property (retain, nonatomic) NSMutableSet *enabledSubviews;
@property (retain, nonatomic) ICTextBackgroundView *backgroundView;
@property (retain, nonatomic) ICAttributionSidebarView *attributionSidebarView;
@property (retain, nonatomic) NSLayoutConstraint *attributionSidebarWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *attributionSidebarTrailingConstraint;
@property (retain, nonatomic) NSDate *attributionSidebarOpenedDate;
@property (readonly, nonatomic) ICTextView *textViewIfLoaded;
@property (nonatomic) BOOL performingInitialSetup;
@property (readonly, nonatomic) NSLayoutConstraint *textViewLeadingConstraint;
@property (readonly, weak, nonatomic) ICViewControllerManager *viewControllerManager;
@property (nonatomic) BOOL ignoresTaps;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTextViewUsingTextController:(id)a0 stylingTextUsingSeparateTextStorageForRendering:(BOOL)a1 note:(id)a2 containerWidth:(double)a3 forManualRendering:(BOOL)a4 scrollState:(id)a5;
+ (id)printFormatterForNote:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 interfaceStyle:(long long)a2;

- (BOOL)becomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)layoutManager:(id)a0 didCompleteLayoutForTextContainer:(id)a1 atEnd:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)layoutManager:(id)a0 textContainer:(id)a1 didChangeGeometryFromSize:(struct CGSize { double x0; double x1; })a2;
- (void)layoutManagerDidInvalidateLayout:(id)a0;
- (void)applyCapturedContentOffsetStateIfNecessary:(id)a0;
- (void)applyInitialScrollState;
- (id)captureContentOffsetStateIfNecessary;
- (id)editorController;
- (id)initWithViewControllerManager:(id)a0 editorViewController:(id)a1 note:(id)a2 initialContainerWidth:(double)a3 scrollState:(id)a4;
- (void)setAttributionSidebarWidth:(double)a0 isGestureActive:(BOOL)a1 animated:(BOOL)a2 currentVelocity:(double)a3;
- (BOOL)shouldAnimateTransitionForSplitViewController:(id)a0;
- (void)splitViewControllerDidEndAnimatedTransitionToStateRequest:(id)a0;
- (void)splitViewControllerWillBeginAnimatedTransitionToStateRequest:(id)a0;

@end
