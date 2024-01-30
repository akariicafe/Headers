@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end
