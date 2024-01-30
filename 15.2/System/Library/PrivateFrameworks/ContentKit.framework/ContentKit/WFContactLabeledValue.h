@class NSString;

@interface WFContactLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) id value;

+ (id)localizedStringForLabel:(id)a0;
+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end
