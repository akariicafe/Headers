@class NSMutableArray;

@interface VKPShieldIndexVariantEntry : PBCodable <NSCopying> {
    struct { unsigned char variantType : 1; } _has;
}

@property (nonatomic) BOOL hasVariantType;
@property (nonatomic) int variantType;
@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSMutableArray *textEntries;

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
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)addEntries:(id)a0;

@end
