@class UILabel, NSString, NSLayoutConstraint;

@interface ICPaperStyleHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintLeading;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintTrailing;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double titleInset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;

@end
