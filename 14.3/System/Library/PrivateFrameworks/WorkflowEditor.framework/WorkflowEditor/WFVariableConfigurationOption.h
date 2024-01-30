@class NSString;

@interface WFVariableConfigurationOption : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end
