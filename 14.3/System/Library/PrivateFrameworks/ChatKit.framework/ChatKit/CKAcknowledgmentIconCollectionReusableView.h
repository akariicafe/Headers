@class UIImageView;

@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *glyphImageView;

+ (id)supplementaryViewKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureWithAcknowledgmentTally:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
