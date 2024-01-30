@class NSString, NSData, DAKeyEncryptedRequest;

@interface DAKeyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *pairedEntityIdentifier;
@property (readonly, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) NSData *trackingReceipt;
@property (readonly, nonatomic) NSData *revocationAttestation;
@property (readonly, nonatomic) DAKeyEncryptedRequest *trackingRequest;
@property (readonly, nonatomic) BOOL onlineImmobilizerToken;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyName:(id)a0 identifier:(id)a1 localIdentifier:(id)a2 pairedEntityIdentifier:(id)a3 invitationIdentifier:(id)a4 trackingReceipt:(id)a5 revocationAttestation:(id)a6 trackingRequest:(id)a7 onlineImmoToken:(BOOL)a8;

@end
