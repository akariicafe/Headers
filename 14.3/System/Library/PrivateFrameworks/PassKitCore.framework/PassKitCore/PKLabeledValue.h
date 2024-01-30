@class NSString;

@interface PKLabeledValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
