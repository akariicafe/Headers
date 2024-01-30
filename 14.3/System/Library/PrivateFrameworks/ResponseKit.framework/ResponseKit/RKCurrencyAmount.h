@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *string;
@property (readonly) NSString *currency;
@property (readonly) double value;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0 currency:(id)a1 value:(double)a2;

@end
