@class CNContactStore, NSString, UIImageView, NSArray, CNSharedProfileStateOracle, CALayer, UIView;
@protocol CNAvatarViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPRLikenessResolver;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNSharedProfileAnimatingAvatarView, CNAvatarViewController>

@property (nonatomic) BOOL isPerformingTransition;
@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic) BOOL allowStaleRendering;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (weak, nonatomic) id<CNAvatarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (readonly, nonatomic) CALayer *sourceAvatarLayer;
@property (readonly, nonatomic) UIImageView *destinationAvatarImageView;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

+ (Class)defaultImplementation;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)a0;

- (void)updateViewWithGroupIdentity:(id)a0;
- (void)performTransitionAnimationWithStartHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (id)descriptorForRequiredKeys;
- (void)performTransitionAnimationWithCompletion:(id /* block */)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)initWithCoder:(id)a0;

@end
