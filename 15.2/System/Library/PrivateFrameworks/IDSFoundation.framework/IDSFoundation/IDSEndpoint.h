@class NSDate, IDSURI, NSString, NSData, IDSEndpointCapabilities, NSError, IDSFamilyEndpointData, IDSMPPublicDeviceIdentityContainer;

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying, IDSDestinationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSURI *URI;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) IDSMPPublicDeviceIdentityContainer *publicDeviceIdentityContainer;
@property (retain, nonatomic) IDSEndpointCapabilities *capabilities;
@property (readonly, nonatomic) NSData *serializedNGMDeviceIdentity;
@property (readonly, nonatomic) NSData *serializedLegacyPublicIdentity;
@property (readonly, nonatomic) NSData *serializedNGMDevicePrekey;
@property (readonly, nonatomic) short ngmVersion;
@property (readonly, nonatomic) char legacyVersion;
@property (readonly, nonatomic) NSError *identityContainerDeserializationError;
@property (readonly, nonatomic) NSData *KTLoggableData;
@property (readonly, nonatomic) NSData *KTDeviceSignature;
@property (readonly, nonatomic) BOOL mismatchedAccountFlag;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSDate *expireDate;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic) NSString *anonymizedSenderID;
@property (readonly, nonatomic) BOOL verifiedBusiness;
@property (readonly, nonatomic) NSString *senderCorrelationIdentifier;
@property (readonly, nonatomic) double queryTimeInterval;
@property (readonly, nonatomic) NSData *serializedPublicLegacyIdentity;
@property (readonly, nonatomic) IDSFamilyEndpointData *familyEndpointData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)destinationURIs;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToEndpoint:(id)a0;
- (id)initWithURI:(id)a0 clientData:(id)a1 pushToken:(id)a2 sessionToken:(id)a3 expireDate:(id)a4 refreshDate:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURI:(id)a0 clientData:(id)a1 KTLoggableData:(id)a2 KTDeviceSignature:(id)a3 mismatchedAccountFlag:(BOOL)a4 pushToken:(id)a5 sessionToken:(id)a6 expireDate:(id)a7 refreshDate:(id)a8 anonymizedSenderID:(id)a9 verifiedBusiness:(BOOL)a10 serializedPublicMessageProtectionIdentity:(id)a11 senderCorrelationIdentifier:(id)a12 queryTimeInterval:(double)a13 serializedNGMDeviceIdentity:(id)a14 serializedNGMDevicePrekey:(id)a15 familyEndpointData:(id)a16;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0 capabilities:(id)a1 ngmVersion:(short)a2 legacyVersion:(char)a3 KTLoggableData:(id)a4 KTDeviceSignature:(id)a5 mismatchedAccountFlag:(BOOL)a6 pushToken:(id)a7 sessionToken:(id)a8 expireDate:(id)a9 refreshDate:(id)a10 anonymizedSenderID:(id)a11 verifiedBusiness:(BOOL)a12 serializedPublicMessageProtectionIdentity:(id)a13 senderCorrelationIdentifier:(id)a14 queryTimeInterval:(double)a15 serializedNGMDeviceIdentity:(id)a16 serializedNGMDevicePrekey:(id)a17 familyEndpointData:(id)a18;

@end
