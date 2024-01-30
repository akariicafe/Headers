@class UIView;
@protocol CKFullscreenEffectView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView

@property (weak, nonatomic) UIView<CKFullscreenEffectView> *effectView;

+ (id)decorationViewKind;
+ (id)reuseIdentifier;

- (void)setupForEffectView:(id)a0;
- (void)tearDownEffectView;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
