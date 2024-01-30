@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
