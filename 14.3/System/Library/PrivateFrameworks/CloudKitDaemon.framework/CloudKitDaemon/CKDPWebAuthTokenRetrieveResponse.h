@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;

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
