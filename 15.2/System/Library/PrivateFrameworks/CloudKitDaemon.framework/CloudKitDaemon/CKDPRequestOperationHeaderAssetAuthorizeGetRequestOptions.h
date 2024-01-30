@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {
    struct { unsigned char contentRequestAuthorizeGetOptions : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic) BOOL hasContentRequestAuthorizeGetOptions;
@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;

+ (Class)contentRequestHeadersType;

- (void)addContentRequestHeaders:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearContentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentRequestHeadersCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
