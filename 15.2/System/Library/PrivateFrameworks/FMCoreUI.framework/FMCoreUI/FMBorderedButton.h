@class UIColor;

@interface FMBorderedButton : FM_Workaround_30408319_Button

@property (nonatomic) BOOL hairlineBorder;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *borderColor;

- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)prepareForInterfaceBuilder;
- (void)_bbUpdateLayer;

@end
