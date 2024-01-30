@class NSData;

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {
    unsigned long long _otherAmount;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned long long _transactionTotal;
    NSData *_aid;
    unsigned int _countryCode;
    unsigned int _currencyCode;
    unsigned int _merchantCapabilities;
    NSData *_merchantId;
    unsigned int _method;
    unsigned int _status;
    NSData *_transactionId;
    unsigned int _transactionType;
    NSData *_uuidReference;
    struct { unsigned char otherAmount : 1; unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char transactionTotal : 1; unsigned char countryCode : 1; unsigned char currencyCode : 1; unsigned char merchantCapabilities : 1; unsigned char method : 1; unsigned char status : 1; unsigned char transactionType : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
