@class NSString;

@interface SUSSoftwareUpdateScanCell : PSTableCell

@property (retain, nonatomic) NSString *currentVersion;
@property BOOL updatesDeferred;
@property BOOL suPathsRestricted;
@property (nonatomic) int state;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)layoutSubviews;
- (id)contentUnavailableConfigurationForState:(int)a0;
- (void).cxx_destruct;
- (double)preferredHeightWithTable:(id)a0;
- (id)upToDateManagedText;
- (id)upToDateText;
- (id)upToDateWithAlternate;

@end
