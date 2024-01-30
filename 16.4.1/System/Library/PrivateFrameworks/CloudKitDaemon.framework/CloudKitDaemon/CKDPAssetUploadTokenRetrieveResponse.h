@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (void)addContentResponseHeaders:(id)a0;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)contentResponseHeadersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)uploadTokensCount;
- (void)addUploadTokens:(id)a0;
- (void)clearContentResponseHeaders;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (void)clearUploadTokens;
- (void).cxx_destruct;

@end
