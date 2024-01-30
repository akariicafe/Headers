@class UIView, UILabel, CNAvatarView, NSArray, CNContact, NSDictionary, CNContactGridClippingView, CNQuickActionsManager, CNQuickActionsView, CNContactFormatter;
@protocol CNAvatarViewDelegate, CNQuickActionsViewDelegate;

@interface CNContactGridCell : UICollectionViewCell

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CNContactGridClippingView *actionsClippingView;
@property (retain, nonatomic) UIView *actionsContainerView;
@property (retain, nonatomic) CNQuickActionsView *actionsView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (weak, nonatomic) id<CNAvatarViewDelegate, CNQuickActionsViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } avatarMargins;
@property (nonatomic) long long monogrammerStyle;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (nonatomic) BOOL showsContactOnTap;
@property (copy, nonatomic) NSArray *actionCategories;
@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (readonly, nonatomic) double maximumActionsWidth;

+ (double)actionsLeftMargin;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)updateConstraints;
- (void)_createViewsIfNeeded;
- (id /* block */)animationBlockForPreparingToShowActions;
- (void)_updateActionsMask;
- (id /* block */)completionBlockForHidingActions;

@end
