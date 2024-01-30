@class CAPackage, NSArray, CAStateController, NSString, CALayer, UIView, NSMutableArray;

@interface CKTipKitOnboardingCollectionViewCell : CKTipKitCollectionViewCell <CNAvatarViewDelegate>

@property (retain, nonatomic) NSArray *recommendedPinningConversations;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAStateController *stateController;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIView *micaView;
@property (retain, nonatomic) NSArray *layerNames;
@property (retain, nonatomic) NSMutableArray *avatarViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)didUpdateContentForAvatarView:(id)a0;
- (void)stopAnimations;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void).cxx_destruct;
- (void)startAnimations;
- (void)willDisplayCell;
- (void)didEndDisplaying;
- (void)resetViews;
- (void)setTipContentView:(id)a0 withRecommenedPinningConversations:(id)a1;
- (void)stepThroughOnboardingTipAnimationForLayer:(id)a0;
- (void)updateTipAnimationIfNeeded;

@end
