@class NSArray, NSString, UIStackView;

@interface DMCEnrollmentTableViewIconCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (copy, nonatomic) NSArray *icons;
@property (retain, nonatomic) UIStackView *stackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)iconLength;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (id)_createImageViewWithImage:(id)a0;
- (void)setIconImages:(id)a0;
- (void)_addConstraintsForStackView:(id)a0;
- (id)_createStackViewWithViews:(id)a0;
- (id)_systemImageWithName:(id)a0;
- (void)_updateImageViewsWithCount:(long long)a0;
- (id)initWithIconImages:(id)a0;
- (id)initWithIconNames:(id)a0;
- (void)setIconNames:(id)a0;

@end
