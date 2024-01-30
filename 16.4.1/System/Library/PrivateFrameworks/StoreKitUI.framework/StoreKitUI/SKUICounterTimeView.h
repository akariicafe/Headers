@class UIColor, UIFont, SKUIClientContext, NSDate, _SKUICounterTimeFieldView;

@interface SKUICounterTimeView : UIView {
    SKUIClientContext *_clientContext;
    _SKUICounterTimeFieldView *_daysFieldView;
    _SKUICounterTimeFieldView *_hoursFieldView;
    long long _lastTimeValue;
    _SKUICounterTimeFieldView *_minutesFieldView;
    _SKUICounterTimeFieldView *_secondsFieldView;
}

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) unsigned long long visibleFields;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)reloadTimeValue;
- (id)_allFieldViews;
- (double)_fieldSpacingForFieldCount:(long long)a0 fieldWidth:(double)a1 totalWidth:(double)a2;
- (void)_setValuesUsingTimestamp:(long long)a0;
- (id)_visibleFieldViews;
- (id)initWithClientContext:(id)a0;

@end
