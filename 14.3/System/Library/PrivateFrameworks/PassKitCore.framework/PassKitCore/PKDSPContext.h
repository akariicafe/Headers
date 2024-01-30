@class NSString;

@interface PKDSPContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *primaryAppleAccountFirstName;
@property (copy, nonatomic) NSString *primaryAppleAccountLastName;
@property (copy, nonatomic) NSString *secureElementID;
@property (copy, nonatomic) NSString *serverEndpointIdentifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *peerPaymentRecipientAddress;
@property (nonatomic) unsigned long long eventFrequency;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setPrimaryAppleAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
