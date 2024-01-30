@class IDSQRProtoPutMaterialErrorIndication, NSMutableArray;

@interface IDSQRProtoPutMaterialIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *materials;
@property (readonly, nonatomic) BOOL hasMissingMaterial;
@property (retain, nonatomic) IDSQRProtoPutMaterialErrorIndication *missingMaterial;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

+ (Class)materialsType;

- (void)clearMaterials;
- (unsigned long long)materialsCount;
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
- (void)addMaterials:(id)a0;
- (id)materialsAtIndex:(unsigned long long)a0;

@end
