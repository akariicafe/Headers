@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)uploadTokensType;
+ (Class)contentResponseHeadersType;

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
- (unsigned long long)contentResponseHeadersCount;
- (void)addUploadTokens:(id)a0;
- (void)addContentResponseHeaders:(id)a0;
- (unsigned long long)uploadTokensCount;
- (void)clearUploadTokens;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (void)clearContentResponseHeaders;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;

@end
