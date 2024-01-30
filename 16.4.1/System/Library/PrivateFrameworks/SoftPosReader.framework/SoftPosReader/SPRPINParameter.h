@class NSData, NSString;

@interface SPRPINParameter : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) double defaultTransactionDataLifetime;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *digest;
@property (readonly, copy, nonatomic) NSString *pinToken;
@property (readonly, nonatomic) double transactionDataLifetime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDigest:(id)a0 pinToken:(id)a1;
- (id)initWithDigest:(id)a0 pinToken:(id)a1 transactionDataLifetime:(double)a2;

@end
