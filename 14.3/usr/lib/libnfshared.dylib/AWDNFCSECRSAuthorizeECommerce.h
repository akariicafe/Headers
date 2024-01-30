@class NSData;

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {
    struct { unsigned char otherAmount : 1; unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char transactionTotal : 1; unsigned char countryCode : 1; unsigned char currencyCode : 1; unsigned char merchantCapabilities : 1; unsigned char method : 1; unsigned char status : 1; unsigned char transactionType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL hasMethod;
@property (nonatomic) unsigned int method;
@property (readonly, nonatomic) BOOL hasAid;
@property (retain, nonatomic) NSData *aid;
@property (readonly, nonatomic) BOOL hasMerchantId;
@property (retain, nonatomic) NSData *merchantId;
@property (nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic) BOOL hasTransactionTotal;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) BOOL hasOtherAmount;
@property (nonatomic) unsigned long long otherAmount;
@property (nonatomic) BOOL hasMerchantCapabilities;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) unsigned int countryCode;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (readonly, nonatomic) BOOL hasTransactionId;
@property (retain, nonatomic) NSData *transactionId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
