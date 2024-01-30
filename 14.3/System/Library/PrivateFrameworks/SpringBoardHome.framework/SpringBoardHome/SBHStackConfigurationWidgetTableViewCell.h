@class CHSAvocadoDescriptor, UIStackView, UIImageView, UILabel;
@protocol SBLeafIconDataSource;

@interface SBHStackConfigurationWidgetTableViewCell : UITableViewCell

@property (retain, nonatomic) id<SBLeafIconDataSource> dataSource;
@property (retain, nonatomic) CHSAvocadoDescriptor *descriptor;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)configureWithDataSource:(id)a0 icon:(id)a1 descriptor:(id)a2;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })_iconImageInfo;

@end
