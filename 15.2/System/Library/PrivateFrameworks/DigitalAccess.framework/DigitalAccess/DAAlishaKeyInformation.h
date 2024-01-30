@class NSString, NSArray, NSData, DAAlishaKeyEncryptedRequest;

@interface DAAlishaKeyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *pairedEntityIdentifier;
@property (readonly, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) NSData *trackingReceipt;
@property (readonly, nonatomic) NSData *revocationAttestation;
@property (readonly, nonatomic) DAAlishaKeyEncryptedRequest *trackingRequest;
@property (readonly, nonatomic) BOOL onlineImmobilizerToken;
@property (readonly, nonatomic) NSArray *supportedTransports;

+ (id)withEndpoint:(id)a0;
+ (id)withKeyName:(id)a0 publicKeyIdentifier:(id)a1 localIdentifier:(id)a2 pairedEntityIdentifier:(id)a3 trackingRequest:(id)a4 onlineImmoToken:(BOOL)a5 supportedTransports:(id)a6;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
