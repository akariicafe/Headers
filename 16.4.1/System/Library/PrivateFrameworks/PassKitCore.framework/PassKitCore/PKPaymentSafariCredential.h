@class NSString, NSDate;

@interface PKPaymentSafariCredential : PKPaymentCredential

@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardholderName;
@property (readonly, copy, nonatomic) NSString *cardNumber;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) NSString *securityCode;
@property (readonly, nonatomic) BOOL canCheckEligibility;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)longDescription;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)initWithSafariDictionary:(id)a0;
- (void)setEligibilityResponse:(id)a0;

@end
