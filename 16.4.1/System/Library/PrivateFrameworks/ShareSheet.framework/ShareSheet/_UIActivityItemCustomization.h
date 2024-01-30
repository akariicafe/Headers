@class NSString;

@interface _UIActivityItemCustomization : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *footerText;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL enabled;

+ (id)actionCustomizationWithTitle:(id)a0 identifier:(id)a1 footerText:(id)a2 handler:(id /* block */)a3;
+ (id)pickerCustomizationWithIdentifier:(id)a0 options:(id)a1 selectedOptionIndex:(long long)a2 footerText:(id)a3 valueChangedHandler:(id /* block */)a4;
+ (id)switchCustomizationWithTitle:(id)a0 identifier:(id)a1 footerText:(id)a2 value:(BOOL)a3 valueChangedHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)a0 identifier:(id)a1 footerText:(id)a2;

@end
