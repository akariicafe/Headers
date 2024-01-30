@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetchToken : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApiToken;
@property (retain, nonatomic) NSString *apiToken;
@property (nonatomic) BOOL hasForceFetchToken;
@property (nonatomic) BOOL forceFetchToken;

+ (id)options;

- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
