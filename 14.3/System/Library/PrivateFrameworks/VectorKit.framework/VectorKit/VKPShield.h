@class NSString, NSMutableArray, VKPGenericShieldStyleInfo;

@interface VKPShield : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *variants;
@property (readonly, nonatomic) BOOL hasGenericShieldStyleInfo;
@property (retain, nonatomic) VKPGenericShieldStyleInfo *genericShieldStyleInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addVariants:(id)a0;
- (unsigned long long)variantsCount;
- (void)clearVariants;
- (id)variantsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
