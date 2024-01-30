@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)uploadTokensType;
+ (Class)contentResponseHeadersType;

- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)uploadTokensCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addUploadTokens:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContentResponseHeaders:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearUploadTokens;
- (unsigned long long)hash;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (void)clearContentResponseHeaders;
- (unsigned long long)contentResponseHeadersCount;
- (id)dictionaryRepresentation;

@end
