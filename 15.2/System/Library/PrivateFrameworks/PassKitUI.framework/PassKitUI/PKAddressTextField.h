@class UIColor, PKContactFieldConfiguration, PKUniqueAddressField;
@protocol PKAddressTextFieldDelegate;

@interface PKAddressTextField : UITextField

@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *invalidColor;
@property (retain, nonatomic) PKUniqueAddressField *addressField;
@property (retain, nonatomic) PKContactFieldConfiguration *contactFieldConfiguration;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<PKAddressTextFieldDelegate> addressDelegate;
@property (readonly, nonatomic) BOOL isInvalid;

- (void)insertTextSuggestion:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)setIsInvalid:(BOOL)a0 showErrorGlyph:(BOOL)a1;

@end
