@class STSegmentItem, UIImageView, UILabel, NSLayoutConstraint;

@interface STSegmentView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) NSLayoutConstraint *detailLabelLeadingConstraint;
@property (readonly, nonatomic) UIImageView *detailImageView;
@property (readonly, nonatomic) NSLayoutConstraint *detailImageWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *detailImageHeightConstraint;
@property (retain, nonatomic) STSegmentItem *item;
@property (readonly) BOOL useVibrancy;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 useVibrancy:(BOOL)a1 truncateLabels:(BOOL)a2;

@end
