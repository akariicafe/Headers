@class NSString;

@interface PKLabeledValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *value;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
