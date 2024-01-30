@class UILabel;

@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long style;
@property (nonatomic) BOOL shouldDisplayTitle;

+ (id)supplementaryViewKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithEntity:(id)a0;

@end
