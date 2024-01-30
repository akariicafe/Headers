@class NSString, NSData, NSMutableArray;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponseUUID;
@property (retain, nonatomic) NSString *responseUUID;
@property (readonly, nonatomic) BOOL hasAuthGetResponseBody;
@property (retain, nonatomic) NSData *authGetResponseBody;
@property (retain, nonatomic) NSMutableArray *responseHeaders;

+ (Class)responseHeadersType;

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
- (void)addResponseHeaders:(id)a0;
- (unsigned long long)responseHeadersCount;
- (void)clearResponseHeaders;
- (id)responseHeadersAtIndex:(unsigned long long)a0;

@end
