@class NSString;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponseHeaderInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHeaderKey;
@property (retain, nonatomic) NSString *headerKey;
@property (readonly, nonatomic) BOOL hasHeaderValue;
@property (retain, nonatomic) NSString *headerValue;

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
