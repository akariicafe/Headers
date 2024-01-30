@class NSData;

@interface HDCodableObjectAssociation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssociationUuid;
@property (retain, nonatomic) NSData *associationUuid;
@property (readonly, nonatomic) BOOL hasObjectUuids;
@property (retain, nonatomic) NSData *objectUuids;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)decodedAssociationUUID;
- (id)initWithAssociationUUID:(id)a0;

@end
