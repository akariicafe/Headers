@class _UIDatePickerMode, UILabel;

@interface UIDatePickerContentView : UIView {
    struct { unsigned char isAmPm : 1; } _datePickerContentViewFlags;
}

@property (retain, nonatomic) _UIDatePickerMode *mode;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) double titleLabelMaxX;
@property (nonatomic) BOOL isAmPm;
@property (nonatomic) long long titleAlignment;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithMode:(id)a0;
- (BOOL)_canBeReusedInPickerView;

@end
