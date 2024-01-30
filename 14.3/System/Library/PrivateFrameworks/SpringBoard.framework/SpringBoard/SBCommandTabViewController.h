@class UILabel, SBIconModel, MTMaterialShadowView, UITapGestureRecognizer, SBIconController, NSMutableArray, SBIconView, UIView, NSLayoutConstraint, NSString, NSMutableOrderedSet, UIHoverGestureRecognizer, UIStackView, UIPanGestureRecognizer;
@protocol SBCommandTabViewControllerDelegate;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate> {
    NSMutableOrderedSet *_recentDisplayItems;
    unsigned long long _selectedIndex;
    SBIconController *_iconController;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    MTMaterialShadowView *_backgroundMaterialView;
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

- (void)iconTapped:(id)a0;
- (void)next;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleCommandTab:(id)a0;
- (void)dealloc;
- (void)previous;
- (BOOL)iconViewDisplaysBadges:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)icon:(id)a0 touchEnded:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)iconTouchBegan:(id)a0;
- (void)_handleShiftCommandTab:(id)a0;
- (void)removeDisplayItem:(id)a0;
- (id)selectedApplicationDisplayItem;
- (unsigned long long)indexOfDisplayItem:(id)a0;
- (void)showCommandTabBar;
- (id)initWithRecentDisplayItems:(id)a0;
- (void)iconModelDidChange:(id)a0;
- (void)_handleUIGesture:(id)a0;
- (void)_handleTapDismissGesture:(id)a0;
- (void)_updateForUserInterfaceStyle;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)a0;
- (void)_updateIconSelectionPositionAndLabelText;

@end
