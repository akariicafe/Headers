@class UILabel, UIImageView;

@interface _HKReportTableViewCell : UITableViewCell

@property (readonly, nonatomic) double minimumHeight;
@property (readonly, nonatomic) UILabel *reportLabel;
@property (readonly, nonatomic) UIImageView *reportImageView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_buildCellStructureWithWidth:(double)a0;
- (id)initWithWidth:(double)a0 minimumHeight:(double)a1;
- (void)setReportName:(id)a0 reportImage:(id)a1;

@end
