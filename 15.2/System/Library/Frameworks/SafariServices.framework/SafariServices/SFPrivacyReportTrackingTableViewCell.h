@class SFPrivacyReportMeterBar, UILayoutGuide, NSNumberFormatter, UILabel, NSLayoutConstraint;

@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell {
    SFPrivacyReportMeterBar *_countMeter;
    UILabel *_maxCountLabel;
    UILayoutGuide *_maxCountMeterGuide;
    NSLayoutConstraint *_countMeterWidthConstraint;
    NSNumberFormatter *_countFormatter;
}

@property (readonly, nonatomic) UILabel *domainLabel;
@property (readonly, nonatomic) UILabel *domainDetailLabel;
@property (readonly, nonatomic) UILabel *countLabel;
@property (nonatomic) double count;
@property (nonatomic) double maxCount;

- (void).cxx_destruct;
- (void)_updateCountViews;
- (id)initWithDetailLabel:(BOOL)a0 reuseIdentifier:(id)a1;

@end
