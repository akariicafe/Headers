@class NSDate, IDSURI, NSString, NSData, IDSMPPublicDeviceIdentityContainer, IDSEndpointCapabilities, NSError;

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying>

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
@property (readonly, nonatomic) BOOL mismatchedAccountFlag;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSDate *expireDate;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic) NSString *anonymizedSenderID;
@property (readonly, nonatomic) BOOL verifiedBusiness;
@property (readonly, nonatomic) NSString *senderCorrelationIdentifier;
@property (readonly, nonatomic) double queryTimeInterval;
@property (readonly, nonatomic) NSData *serializedPublicLegacyIdentity;

- (id)initWithURI:(id)a0 clientData:(id)a1 KTLoggableData:(id)a2 mismatchedAccountFlag:(BOOL)a3 pushToken:(id)a4 sessionToken:(id)a5 expireDate:(id)a6 refreshDate:(id)a7 anonymizedSenderID:(id)a8 verifiedBusiness:(BOOL)a9 serializedPublicMessageProtectionIdentity:(id)a10 senderCorrelationIdentifier:(id)a11 queryTimeInterval:(double)a12 serializedNGMDeviceIdentity:(id)a13 serializedNGMDevicePrekey:(id)a14;
- (void).cxx_destruct;
- (id)initWithURI:(id)a0 capabilities:(id)a1 ngmVersion:(short)a2 legacyVersion:(char)a3 KTLoggableData:(id)a4 mismatchedAccountFlag:(BOOL)a5 pushToken:(id)a6 sessionToken:(id)a7 expireDate:(id)a8 refreshDate:(id)a9 anonymizedSenderID:(id)a10 verifiedBusiness:(BOOL)a11 serializedPublicMessageProtectionIdentity:(id)a12 senderCorrelationIdentifier:(id)a13 queryTimeInterval:(double)a14 serializedNGMDeviceIdentity:(id)a15 serializedNGMDevicePrekey:(id)a16;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToEndpoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithURI:(id)a0 clientData:(id)a1 pushToken:(id)a2 sessionToken:(id)a3 expireDate:(id)a4 refreshDate:(id)a5;
- (void)encodeWithCoder:(id)a0;

@end
