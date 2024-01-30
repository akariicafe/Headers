@class NSMutableArray;

@interface HKCodableHealthRecordsEduContent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

- (unsigned long long)sectionsCount;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSections:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearSections;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
