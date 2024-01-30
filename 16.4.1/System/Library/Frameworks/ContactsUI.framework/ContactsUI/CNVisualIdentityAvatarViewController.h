@class UIView, NSString, UITapGestureRecognizer, UIImage, CNAvatarAccessoryView, CAShapeLayer, CNVisualIdentityContactAvatarProvider, UIImageView, CNUIAvatarLayoutLayerItem, CNVisualIdentityAvatarLayoutManager, CNVisualIdentity, CNBadgingAvatarBadgeStyleSettings;
@protocol CNVisualIdentityPrimaryAvatarProvider, CNScheduler;

@interface CNVisualIdentityAvatarViewController : UIViewController <CNContactChangesObserver, CNVisualIdentityAvatarContainerViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<CNVisualIdentityPrimaryAvatarProvider> primaryAvatarProvider;
@property (readonly, nonatomic) id<CNScheduler> renderingQueue;
@property (readonly, nonatomic) id<CNScheduler> callbackQueue;
@property (retain, nonatomic) CNVisualIdentityContactAvatarProvider *avatarProvider;
@property (retain, nonatomic) UIImageView *mediaContextBadgeView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UITapGestureRecognizer *badgeTapGestureRecognizer;
@property (retain, nonatomic) CNVisualIdentityAvatarLayoutManager *avatarLayoutManager;
@property (retain, nonatomic) CNUIAvatarLayoutLayerItem *avatarLayerItem;
@property (retain, nonatomic) CAShapeLayer *avatarClippingLayer;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL usingDropAppearance;
@property (retain, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (unsigned long long)maxContactAvatars;

- (long long)itemCount;
- (void)contactDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)removeBadgeTapGestureRecognizer;
- (BOOL)shouldDisplayPrimaryAvatarImage;
- (void)updateBadgeImageViewContentMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameForFocusedAvatarInView:(id)a0;
- (void)beginDropAppearance;
- (id)containingCellView;
- (void)createPrimaryAvatarLayerIfNeeded;
- (void)endDropAppearance;
- (struct CGSize { double x0; double x1; })estimatedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithVisualIdentity:(id)a0;
- (id)initWithVisualIdentity:(id)a0 primaryAvatarProvider:(id)a1;
- (id)initWithVisualIdentity:(id)a0 primaryAvatarProvider:(id)a1 avatarImageRendererSettings:(id)a2;
- (id)layerForPrimaryAvatar;
- (void)layoutAvatars;
- (void)layoutPrimaryAvatar;
- (void)logSublayersContent;
- (void)removeAllSublayers;
- (void)setBadgeTarget:(id)a0 action:(SEL)a1;
- (void)setBadgeViewImage:(id)a0;
- (void)updateAvatarSublayersAndAddToView;
- (void)updateBadgeCropStyle;
- (void)updateBadgeImageViewBackgroundColor;
- (void)updateBadgeImageViewPosition;
- (void)updateBadgeStyling;
- (void)updateBadgeTintColor;
- (void)updateBadgeViewFrame;
- (void)updateContactChangesNotifierRegistration;
- (void)updateImageForLayerItem:(id)a0 atIndex:(long long)a1 includePlaceholder:(BOOL)a2;
- (void)updateImageForLayerItem:(id)a0 atIndex:(long long)a1 includePlaceholder:(BOOL)a2 animated:(BOOL)a3;
- (void)updateImageForPrimaryAvatar;
- (void)updateMediaContextBadgeFrame;
- (void)updateMediaContextBadgeImage;
- (void)updatePrimaryAvatar;
- (void)visualIdentityDidUpdate:(id)a0;

@end
