@class NSString, NSDate;

@interface AMSMediaToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double lifetime;
@property (readonly, nonatomic) NSString *tokenString;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2 valid:(BOOL)a3;
- (id)invalidCopy;
- (id)initWithCoder:(id)a0;
- (double)percentageOfLifetimeRemaining;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)willExpireWithin:(double)a0;

@end
