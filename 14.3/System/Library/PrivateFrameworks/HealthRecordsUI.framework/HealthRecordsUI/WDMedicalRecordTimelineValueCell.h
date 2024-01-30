@class UILabel, NSString, NSLayoutConstraint;

@interface WDMedicalRecordTimelineValueCell : WDMedicalRecordGroupableCell {
    NSString *_titleString;
    NSString *_subtitleString;
    NSString *_valueString;
    NSString *_unitString;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleValueGapConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueLeftAlignConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueRightAlignConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleBottomConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)_titleLabelFont;
+ (id)_unitLabelFontSingleLine;
+ (id)_valueLabelFontMultipleLines;
+ (id)_unitLabelFontMultipleLines;
+ (double)_titleLabelTopToFirstBaseline;
+ (id)_valueLabelFontSingleLine;

- (void).cxx_destruct;
- (id)_generateValueDisplayAttributedStringWithValueFont:(id)a0 unitFont:(id)a1;
- (id)unit;
- (id)value;
- (void)updateConstraints;
- (void)setupSubviews;
- (void)setValue:(id)a0 unit:(id)a1;
- (id)_generateValueDisplayAttributedString;

@end
