@class NSString, NSData, NSMutableArray;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying> {
    struct { unsigned char epochTimestamp : 1; unsigned char expiresAt : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL hasNonce;
@property (retain, nonatomic) NSString *nonce;
@property (nonatomic) BOOL hasEpochTimestamp;
@property (nonatomic) unsigned long long epochTimestamp;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) BOOL hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;
@property (nonatomic) BOOL hasExpiresAt;
@property (nonatomic) unsigned long long expiresAt;
@property (readonly, nonatomic) BOOL hasInitiativeContext;
@property (retain, nonatomic) NSString *initiativeContext;
@property (readonly, nonatomic) BOOL hasInitiative;
@property (retain, nonatomic) NSString *initiative;
@property (retain, nonatomic) NSMutableArray *signedFields;
@property (readonly, nonatomic) BOOL hasAmpEnrollmentPinning;
@property (retain, nonatomic) NSData *ampEnrollmentPinning;
@property (readonly, nonatomic) BOOL hasOperationalAnalyticsIdentifier;
@property (retain, nonatomic) NSString *operationalAnalyticsIdentifier;

+ (Class)signedFieldsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSignedFields:(id)a0;
- (unsigned long long)signedFieldsCount;
- (void)clearSignedFields;
- (id)signedFieldsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
