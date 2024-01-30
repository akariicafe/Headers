@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (id)description;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (id)init;
- (unsigned long long)hash;

@end
