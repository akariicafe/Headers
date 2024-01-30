@class NSMutableArray;

@interface VKPShieldIndex : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSMutableArray *textEntries;
@property (retain, nonatomic) NSMutableArray *variantEntries;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)addTextEntries:(id)a0;
- (unsigned long long)textEntriesCount;
- (void)clearTextEntries;
- (id)textEntriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addVariantEntries:(id)a0;
- (id)description;
- (unsigned long long)variantEntriesCount;
- (void)clearVariantEntries;
- (id)variantEntriesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)addEntries:(id)a0;

@end
