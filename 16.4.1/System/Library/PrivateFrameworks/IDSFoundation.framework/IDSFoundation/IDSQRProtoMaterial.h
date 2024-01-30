@class NSMutableArray;

@interface IDSQRProtoMaterial : PBCodable <NSCopying>

@property (nonatomic) unsigned long long ownerParticipantId;
@property (nonatomic) unsigned long long receiverParticipantId;
@property (retain, nonatomic) NSMutableArray *materialInfos;

+ (Class)materialInfoType;

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
- (void)addMaterialInfo:(id)a0;
- (void)clearMaterialInfos;
- (id)materialInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)materialInfosCount;

@end
