@class WFContentProperty, NSString;

@interface WFVariableConfigurationProperty : NSObject

@property (readonly, nonatomic) WFContentProperty *contentProperty;
@property (readonly, nonatomic) BOOL negativeProperty;
@property (readonly, nonatomic) NSString *label;

- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentProperty:(id)a0 negativeProperty:(BOOL)a1;

@end
