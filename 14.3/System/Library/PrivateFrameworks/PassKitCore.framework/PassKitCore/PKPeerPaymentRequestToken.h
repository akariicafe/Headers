@class NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestToken;
@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;

+ (id)informalRequestToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestToken:(id)a0 deviceScoreIdentifier:(id)a1;
- (BOOL)isEqualToPeerPaymentRequestToken:(id)a0;
- (BOOL)isInformalRequestToken;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
