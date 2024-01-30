@class NSString, CNUIAvatarLayoutLayerItem, CNVisualIdentityContactAvatarProvider, CAShapeLayer, CNVisualIdentityAvatarLayoutManager, UIView, CNVisualIdentity;
@protocol CNVisualIdentityPrimaryAvatarProvider, CNScheduler;

@interface CNVisualIdentityAvatarViewController : UIViewController <CNContactChangesObserver>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<CNVisualIdentityPrimaryAvatarProvider> primaryAvatarProvider;
@property (readonly, nonatomic) id<CNScheduler> renderingQueue;
@property (readonly, nonatomic) id<CNScheduler> callbackQueue;
@property (retain, nonatomic) CNVisualIdentityContactAvatarProvider *avatarProvider;
@property (retain, nonatomic) CNVisualIdentityAvatarLayoutManager *avatarLayoutManager;
@property (retain, nonatomic) CNUIAvatarLayoutLayerItem *avatarLayerItem;
@property (retain, nonatomic) CAShapeLayer *avatarClippingLayer;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL usingDropAppearance;
@property (retain, nonatomic) CNVisualIdentity *visualIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (unsigned long long)maxContactAvatars;

- (void)contactDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)initWithVisualIdentity:(id)a0;
- (void)layoutAvatars;
- (id)initWithVisualIdentity:(id)a0 primaryAvatarProvider:(id)a1;
- (id)initWithVisualIdentity:(id)a0 primaryAvatarProvider:(id)a1 avatarImageRendererSettings:(id)a2;
- (void)removeAllSublayers;
- (void)updateContactChangesNotifierRegistration;
- (id)containingCellView;
- (void)logSublayersContent;
- (void)updateAvatarSublayersAndAddToView;
- (void)updatePrimaryAvatar;
- (void)createPrimaryAvatarLayerIfNeeded;
- (void)updateImageForPrimaryAvatar;
- (void)layoutPrimaryAvatar;
- (void)updateImageForLayerItem:(id)a0 atIndex:(long long)a1 includePlaceholder:(BOOL)a2;
- (void)beginDropAppearance;
- (void)updateImageForLayerItem:(id)a0 atIndex:(long long)a1 includePlaceholder:(BOOL)a2 animated:(BOOL)a3;
- (id)layerForPrimaryAvatar;
- (void)endDropAppearance;
- (BOOL)shouldDisplayPrimaryAvatarImage;
- (void)visualIdentityDidUpdate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameForFocusedAvatarInView:(id)a0;
- (long long)itemCount;
- (void)viewDidLoad;

@end
