@class UILabel, NSString, UIView;

@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *chevronView;
@property (copy, nonatomic) NSString *title;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)setupSubviews;

@end
