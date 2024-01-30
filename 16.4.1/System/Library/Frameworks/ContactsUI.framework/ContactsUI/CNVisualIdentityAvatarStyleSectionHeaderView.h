@class NSString, UIFont, UILabel;

@interface CNVisualIdentityAvatarStyleSectionHeaderView : UICollectionReusableView

@property (class, readonly, nonatomic) NSString *reuseID;
@property (class, readonly, nonatomic) UIFont *font;

@property (readonly, nonatomic) UILabel *label;

+ (struct CGSize { double x0; double x1; })sizeWithText:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
