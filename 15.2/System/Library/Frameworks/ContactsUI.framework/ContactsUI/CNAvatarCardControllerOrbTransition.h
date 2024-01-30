@class UITargetedPreview, NSString, UIVisualEffectView, UIViewPropertyAnimator, CNAvatarCardViewController, CNContactOrbHeaderView, UIView;
@protocol CNAvatarCardControllerOrbTransitionDelegate;

@interface CNAvatarCardControllerOrbTransition : NSObject <_UIClickPresentationTransition>

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } endHeaderTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } endActionListTransform;
@property (nonatomic) double highlightViewToAlpha;
@property (nonatomic) BOOL isDismissing;
@property (weak, nonatomic) CNContactOrbHeaderView *headerView;
@property (weak, nonatomic) CNAvatarCardViewController *cardViewController;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIView *highlightedView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (weak, nonatomic) id<CNAvatarCardControllerOrbTransitionDelegate> delegate;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
