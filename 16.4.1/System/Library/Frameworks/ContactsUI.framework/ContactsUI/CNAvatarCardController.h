@class CNContactOrbHeaderView, CNContactOrbHeaderViewController, UIContextMenuInteraction, UIViewController, CNAvatarView, UIView, UIGestureRecognizer, NSString, CNContact, NSArray, NSData, CNActionMenuHelper, CNContactOrbActionsController;
@protocol CNAvatarCardControllerDelegate;

@interface CNAvatarCardController : NSObject <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CNContactOrbActionsControllerDelegate>

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic) long long presentationResult;
@property (retain, nonatomic) NSData *overrideImageData;
@property (retain, nonatomic) CNContactOrbHeaderViewController *orbHeaderViewController;
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper;
@property (retain, nonatomic) CNContactOrbActionsController *orbActionsController;
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

+ (id)descriptorForRequiredKeys;
+ (id)previewHeaderViewControllerForContacts:(id)a0;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)a0;
+ (BOOL)avatarCardEnabledForTraitCollection:(id)a0;

- (void)prepareForDisplay;
- (BOOL)hasActions;
- (BOOL)readyForContactsMatching:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)configurePreviewInteraction;
- (void)prepareWithContacts:(id)a0 store:(id)a1;
- (void)dismissAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)retrieveActions;
- (void)setupActionsForContacts:(id)a0;
- (void)prepareWithContacts:(id)a0 storeProvider:(id /* block */)a1;
- (id)refetchContactsMatching:(id)a0 storeProvider:(id /* block */)a1;
- (void)showContact:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)contactOrbActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (id)presentingViewControllerForActionsController:(id)a0;
- (void)cleanupAfterDisplay;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)prepareWithOverrideImageData:(id)a0;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)setupActionsControllerForContacts:(id)a0;
- (void)showContact;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)headerViewController;
- (void).cxx_destruct;
- (id)contextMenuInteractionTargetedPreview;
- (void)updateWithMenuItems:(id)a0;

@end
