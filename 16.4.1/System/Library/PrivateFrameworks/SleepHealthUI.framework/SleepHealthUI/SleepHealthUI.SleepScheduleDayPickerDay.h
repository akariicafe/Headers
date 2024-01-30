@interface SleepHealthUI.SleepScheduleDayPickerDay : UIControl {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ day;
    void /* unknown type, empty encoding */ background;
    void /* unknown type, empty encoding */ dayLabel;
    void /* unknown type, empty encoding */ elsewhereIndicator;
    void /* unknown type, empty encoding */ isSelectedElsewhere;
}

@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityWeekday;

@end
