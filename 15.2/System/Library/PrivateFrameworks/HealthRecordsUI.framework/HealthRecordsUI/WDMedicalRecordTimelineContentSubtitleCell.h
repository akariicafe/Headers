@class NSString, UILabel, NSLayoutConstraint, UIView;

@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable> {
    NSString *_titleString;
    NSString *_subtitleString;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *disclosureChevronView;
@property (retain, nonatomic) NSLayoutConstraint *titlePillConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleChevronConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL showDisclosureIndicator;
@property (nonatomic) BOOL useRegularFontForSubtitle;

- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setAttributedSubtitleText:(id)a0;

@end
