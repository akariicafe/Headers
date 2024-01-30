@class UIView;

@interface PXGadgetUICollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *gadgetContentView;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)prepareForReuse;

@end
