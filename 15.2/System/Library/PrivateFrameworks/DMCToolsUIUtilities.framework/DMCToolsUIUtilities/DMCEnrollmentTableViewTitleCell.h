@class UILabel, NSString;

@interface DMCEnrollmentTableViewTitleCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (void)layoutSubviews;
- (id)initWithTitle:(id)a0;
- (double)cellHeight;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)estimatedCellHeight;
- (id)_fontForTitle;

@end
