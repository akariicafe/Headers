@class UIImage, NSString;

@interface DMCEnrollmentTableViewPromotionCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (void)layoutSubviews;
- (id)_subtitleFont;
- (id)_titleFont;
- (double)cellHeight;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)estimatedCellHeight;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (double)gapToNextSection;
- (void)_setupContentConfigurationWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
