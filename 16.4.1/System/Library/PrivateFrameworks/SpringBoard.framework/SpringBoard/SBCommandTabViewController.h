@class UILabel, SBIconModel, MTShadowView, SBIconView, SBIconController, NSMutableArray, UITapGestureRecognizer, UIView, NSLayoutConstraint, NSString, NSMutableOrderedSet, UIHoverGestureRecognizer, MTMaterialView, UIStackView, UIPanGestureRecognizer;
@protocol SBCommandTabViewControllerDelegate;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate> {
    NSMutableOrderedSet *_recentDisplayItems;
    unsigned long long _selectedIndex;
    SBIconController *_iconController;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    MTShadowView *_backgroundShadowView;
    MTMaterialView *_backgroundMaterialView;
    UIView *_blurredBackgroundView;
    UIView *_selectionSquareView;
    SBIconView *_selectedIconView;
    UILabel *_selectedIconLabel;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    NSLayoutConstraint *_selectedLabelXConstraint;
    NSLayoutConstraint *_selectedLabelBottomConstraint;
    UIStackView *_stackView;
    SBIconView *_homeIconView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapDismissGestureRecognizer;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    struct CGPoint { double x; double y; } _lastHoverLocation;
    BOOL _isTouchDown;
    BOOL _isIconSelected;
}

@property (weak, nonatomic) id<SBCommandTabViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canActivateWithRecentDisplayItems:(id)a0;

- (void)next;
- (void)iconTouchBegan:(id)a0;
- (void)previous;
- (void)iconTapped:(id)a0;
- (BOOL)iconViewDisplaysAccessories:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)icon:(id)a0 touchEnded:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_handleShiftCommandTab:(id)a0;
- (id)init;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (void)_handleCommandTab:(id)a0;
- (void).cxx_destruct;
- (void)_updateForUserInterfaceStyle;
- (void)_configureGridLayoutConfiguration:(id)a0;
- (void)_handleTapDismissGesture:(id)a0;
- (void)_handleUIGesture:(id)a0;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)a0;
- (void)_updateIconSelectionPositionAndLabelText;
- (void)iconModelDidChange:(id)a0;
- (unsigned long long)indexOfDisplayItem:(id)a0;
- (id)initWithRecentDisplayItems:(id)a0;
- (void)removeDisplayItem:(id)a0;
- (id)selectedApplicationDisplayItem;
- (void)showCommandTabBar;

@end
