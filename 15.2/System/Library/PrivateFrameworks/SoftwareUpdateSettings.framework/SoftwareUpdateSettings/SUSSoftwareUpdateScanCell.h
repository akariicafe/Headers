@class UILabel, NSString, UIActivityIndicatorView;

@interface SUSSoftwareUpdateScanCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSString *currentVersion;
@property BOOL updatesDeferred;
@property BOOL suPathsRestricted;
@property (nonatomic) int state;

+ (long long)cellStyle;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)preferredHeightWithTable:(id)a0;
- (id)upToDateText;
- (id)upToDateManagedText;
- (id)upToDateWithAlternate;

@end
