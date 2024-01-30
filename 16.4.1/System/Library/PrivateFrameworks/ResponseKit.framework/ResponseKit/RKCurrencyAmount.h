@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *string;
@property (readonly) NSString *currency;
@property (readonly) double value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 currency:(id)a1 value:(double)a2;

@end
