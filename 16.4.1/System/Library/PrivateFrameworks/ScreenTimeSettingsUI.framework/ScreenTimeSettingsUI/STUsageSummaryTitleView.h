@class NSArray, UIImageView, UILabel, NSLayoutConstraint, STUsageReport;

@interface STUsageSummaryTitleView : UIView

@property (readonly) BOOL useVibrancy;
@property (readonly) BOOL truncateAverageLabel;
@property BOOL hasMultilineLayout;
@property double previousWidth;
@property (readonly) UILabel *titleLabel;
@property (readonly) UILabel *usageLabel;
@property (retain) UIImageView *notificationDot;
@property (readonly) UIImageView *deltaAverageImageView;
@property (readonly) UILabel *deltaAverageLabel;
@property (retain) NSArray *variableConstraints;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewVerticalPosition;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewWidthConstraint;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewHeightConstraint;
@property (nonatomic) unsigned long long usageItemType;
@property (retain, nonatomic) STUsageReport *usageReport;

- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_setUpConstraints;
- (void)_updateTitleLabel;
- (BOOL)_shouldHaveMultilineLayoutForLineWidth:(double)a0;
- (void)_updateDeltaAverageViews;
- (void)_updateUsageLabel;
- (id)initWithVibrancy:(BOOL)a0 usageItemType:(unsigned long long)a1 truncateAverageLabel:(BOOL)a2;

@end
