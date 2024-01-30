@class NSData, NSMutableArray;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasObjectUUID;
@property (retain, nonatomic) NSData *objectUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;

+ (Class)authorizationsType;

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
- (void)addAuthorizations:(id)a0;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (id)authorizationsAtIndex:(unsigned long long)a0;

@end
