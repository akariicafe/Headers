@class NSMutableArray;

@interface NPKProtoRevokeSubcredentialsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;

+ (Class)identifiersType;

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
- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;

@end
