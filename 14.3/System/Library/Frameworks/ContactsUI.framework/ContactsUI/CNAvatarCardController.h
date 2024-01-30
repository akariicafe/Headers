@class _UIClickPresentationInteraction, CNContactOrbHeaderView, UIVisualEffectView, UITapGestureRecognizer, UIViewController, CNAvatarView, UIView, NSString, CNAvatarCardViewController, CNContact, UIAlertController, UIGestureRecognizer, NSArray, NSData;
@protocol CNAvatarCardControllerDelegate;

@interface CNAvatarCardController : NSObject <_UIClickPresentationInteractionDelegate, CNAvatarCardViewControllerDelegate, CNAvatarCardControllerOrbTransitionDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNAvatarCardViewController *cardViewController;
@property (retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction;
@property (nonatomic) long long presentationResult;
@property (retain, nonatomic) NSArray *cardControllerConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (retain, nonatomic) NSData *overrideImageData;
@property (weak, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CNContactOrbHeaderView *headerView;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer;
@property (nonatomic) BOOL actionsNeedRefresh;
@property (nonatomic) BOOL bypassActionValidation;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSArray *actionCategories;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *message;
@property (weak, nonatomic) id<CNAvatarCardControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewHeaderViewControllerForContacts:(id)a0;
+ (id)descriptorForRequiredKeys;
+ (BOOL)avatarCardEnabledForTraitCollection:(id)a0;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)a0;

- (void)prepareForDisplay;
- (void)presentAnimated:(BOOL)a0;
- (void)cardViewControllerDidDismiss:(id)a0;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)prepareWithContacts:(id)a0 storeProvider:(id /* block */)a1;
- (void)presentAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)showContact:(id)a0;
- (void).cxx_destruct;
- (void)orbTransitionDidEndTransition:(id)a0;
- (void)prepareWithOverrideImageData:(id)a0;
- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)orbTransitionDidPrepareTransition:(id)a0 withContainerView:(id)a1;
- (BOOL)readyForContactsMatching:(id)a0;
- (void)_updateHeaderViewFrame;
- (void)showContact;
- (void)configurePreviewInteraction;
- (void)prepareWithContacts:(id)a0 store:(id)a1;
- (id)cardViewController:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (void)_setupForCardControllerPresentation;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)dismissAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_setupAlertController;
- (id)refetchContactsMatching:(id)a0 storeProvider:(id /* block */)a1;
- (BOOL)hasActions;
- (void)_setupCardViewControllerWithContacts:(id)a0;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (void)cleanupAfterDisplay;
- (void)cardViewControllerWillDismiss:(id)a0;

@end
