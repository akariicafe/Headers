@class NSString, UILabel, NSLayoutConstraint;

@interface PUAssetPickerHeaderView : UICollectionReusableView

@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *kind;

@property (readonly, nonatomic) NSLayoutConstraint *labelLeadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *labelTrailingConstraint;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) double sideMargins;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
