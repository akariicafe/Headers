@class UIColor;

@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL sizeToFitTextWidth;
@property (nonatomic) BOOL uppercaseRowTitles;
@property (nonatomic) double selectedRowBorderWidth;
@property (nonatomic) double selectedRowCornerRadius;
@property (nonatomic) BOOL showOffState;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDefaultStyleProperties;
- (void)_setMultiStateStyleProperties;

@end
