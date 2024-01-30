@class UILabel, NSString, UIView;

@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *chevronView;
@property (copy, nonatomic) NSString *title;

- (id)_titleLabelFont;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
