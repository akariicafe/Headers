@class UIColor;

@interface FMBorderedButton : FM_Workaround_30408319_Button

@property (nonatomic) BOOL hairlineBorder;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *borderColor;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_bbUpdateLayer;

@end
