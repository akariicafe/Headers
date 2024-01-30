@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDecimalNumber *magnitude;
@property (readonly, copy, nonatomic) NSString *unitString;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMagnitude:(id)a0 unitString:(id)a1;

@end
