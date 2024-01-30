@class NSMutableArray;

@interface BLTPBSectionIcon : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *variants;

+ (Class)variantType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)variantsCount;
- (void)clearVariants;
- (void)addVariant:(id)a0;
- (void)copyTo:(id)a0;
- (id)variantAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
