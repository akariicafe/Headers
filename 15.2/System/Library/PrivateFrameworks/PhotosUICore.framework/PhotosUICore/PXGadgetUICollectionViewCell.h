@class UIView;

@interface PXGadgetUICollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *gadgetContentView;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateFocusRing;
- (id)focusEffect;

@end
