@class NSString, UIView;
@protocol NCNotificationStaticContentAccepting, PLPlatter, PLContentSizeCategoryAdjusting;

@interface NCNotificationViewControllerView : NCHitTestTransparentView <PLContentSizeManaging, NCNotificationListDimmable> {
    UIView *_stackDimmingView;
}

@property (weak, nonatomic) UIView<PLPlatter, NCNotificationStaticContentAccepting, PLContentSizeCategoryAdjusting> *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)invalidateStackedPlattersRecipe;
- (void)_updateStackDimmingVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;

@end
