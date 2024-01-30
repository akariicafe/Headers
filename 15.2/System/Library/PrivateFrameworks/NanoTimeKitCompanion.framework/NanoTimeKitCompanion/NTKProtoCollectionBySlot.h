@class NSString, NTKProtoPigmentCollection;

@interface NTKProtoCollectionBySlot : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSlot;
@property (retain, nonatomic) NSString *slot;
@property (readonly, nonatomic) BOOL hasCollection;
@property (retain, nonatomic) NTKProtoPigmentCollection *collection;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
