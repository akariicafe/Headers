@class UILabel, NSString, NSLayoutConstraint;

@interface ICPaperStyleHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintLeading;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintTop;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintTrailing;
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintBottom;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } titleInsets;

- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
