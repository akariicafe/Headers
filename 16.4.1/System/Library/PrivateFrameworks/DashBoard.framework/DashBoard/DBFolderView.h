@class DBScrollButton, NSLayoutConstraint;
@protocol DBEnvironment;

@interface DBFolderView : SBRootFolderView

@property (nonatomic) BOOL buttonUXEnabled;
@property (retain, nonatomic) DBScrollButton *scrollLeftButton;
@property (retain, nonatomic) DBScrollButton *scrollRightButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } listViewInsets;
@property (retain, nonatomic) NSLayoutConstraint *leadingScrollArrowLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingScrollArrowTrailingConstraint;
@property (weak, nonatomic) id<DBEnvironment> environment;

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)_scrollViewClass;
+ (double)maximumPageControlHeightForInteractionAffordances:(unsigned long long)a0;

- (double)_listViewSideInset;
- (BOOL)_showsButtons;
- (void)_updatePageControlToIndex:(long long)a0;
- (double)internalDockPageControlVerticalMargin;
- (id)_newPageControl;
- (void)_layoutSubviews;
- (void)_updateIconListFrames;
- (double)pageControlAreaHeight;
- (BOOL)_useParallaxOnPageControl;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (BOOL)shouldInstallFocusGuides;
- (long long)iconVisibilityHandling;
- (void)_scrollButtonPressed:(id)a0;
- (long long)orientation;
- (void)setLeadingCustomViewVisibilityProgress:(double)a0;
- (long long)defaultPageIndex;
- (void)_updateScrollButtonStatesForIndex:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (BOOL)hidesOffscreenCustomPageViews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_listViewVerticalInset;
- (void).cxx_destruct;

@end
