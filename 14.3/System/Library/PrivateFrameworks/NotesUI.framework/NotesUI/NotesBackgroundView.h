@class NotesBarBackgroundView, NSString, UIView, NSLayoutConstraint;
@protocol ICAccessibilityChildReparentingProvider, ICAccessibilityChildReparentingController;

@interface NotesBackgroundView : UIView <ICAccessibilityChildReparentingTarget>

@property (retain, nonatomic) NotesBarBackgroundView *topBarView;
@property (retain, nonatomic) NotesBarBackgroundView *bottomBarView;
@property (retain, nonatomic) NotesBarBackgroundView *bottomSafeAreaBarView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (weak, nonatomic) id<ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible;
@property (weak, nonatomic) id<ICAccessibilityChildReparentingController> axChildReparentingController;
@property (nonatomic) BOOL hasBarBlur;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityElements;
- (void).cxx_destruct;
- (void)commonInit;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (void)_setOverrideUserInterfaceStyle:(long long)a0;
- (BOOL)_accessibilityIsScannerGroup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (id)scrollViewDescendantOfView:(id)a0;
- (void)setContentView:(id)a0 useReadableLayoutGuide:(BOOL)a1;
- (void)setContentView:(id)a0 useReadableLayoutGuide:(BOOL)a1 topMargin:(double)a2;
- (void)reparentAccessibilityChildrenOfElement:(id)a0;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)a0 toContainer:(id)a1;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)a0 bottomToolbar:(id)a1 toContainer:(id)a2;
- (void)updateConstraintsForBottomToolbar:(id)a0;
- (void)fadeOutBottomToolbarInNavigationController:(id)a0 duration:(double)a1;
- (void)fadeInBottomToolbarInNavigationController:(id)a0 duration:(double)a1;
- (void)scrollView:(id)a0 didChangeContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)snapshotContentIntoSnapshotView:(id)a0;
- (void)addSubviewAboveAllViews:(id)a0;

@end
