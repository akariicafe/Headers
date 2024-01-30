@class UIView, NSArray, NSString, UILabel, NSLayoutConstraint, UIStatusBarCarPlayDockAppItemButton;

@interface UIStatusBarCarPlayDockItemView : UIStatusBarItemView

@property (retain, nonatomic) UILabel *inCallDurationLabel;
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemOneButton;
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemTwoButton;
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemThreeButton;
@property (retain, nonatomic) NSLayoutConstraint *inCallLabelSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *itemOneTopConstraint;
@property (copy, nonatomic) NSArray *currentBundleIdentifiers;
@property (copy, nonatomic) NSString *currentActiveBundleIdentifier;
@property (weak, nonatomic) UIView *preferredItemViewToFocus;
@property (nonatomic, getter=isShowingCallTimer) BOOL showingCallTimer;

- (id)preferredFocusEnvironments;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)neededSizeForImageSet:(id)a0;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (double)extraLeftPadding;
- (void).cxx_destruct;
- (unsigned long long)_numberOfEnabledItems;
- (double)_neededSizeWithCallTimer;
- (double)_neededSizeWithoutCallTimer;
- (void)updateForNewStyle:(id)a0;
- (id)_toItemViewForBundleIdentifier:(id)a0;
- (void)_updateInCallDurationIfNecessary:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsUserInteraction;

@end
