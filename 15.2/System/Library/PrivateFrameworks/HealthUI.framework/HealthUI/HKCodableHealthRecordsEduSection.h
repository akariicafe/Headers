@class NSString, NSMutableArray;

@interface HKCodableHealthRecordsEduSection : PBCodable <NSCopying> {
    struct { unsigned char sectionType : 1; } _has;
}

@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) long long sectionType;
@property (readonly, nonatomic) BOOL hasSectionLocalizedContent;
@property (retain, nonatomic) NSString *sectionLocalizedContent;
@property (retain, nonatomic) NSMutableArray *sectionLocaleIdentifiers;
@property (retain, nonatomic) NSMutableArray *sectionValidRegionCodes;
@property (retain, nonatomic) NSMutableArray *sectionAttributions;
@property (retain, nonatomic) NSMutableArray *sectionCitations;

+ (Class)sectionLocaleIdentifiersType;
+ (Class)sectionValidRegionCodesType;
+ (Class)sectionAttributionsType;
+ (Class)sectionCitationsType;

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
- (void)addSectionCitations:(id)a0;
- (void)addSectionAttributions:(id)a0;
- (void)addSectionValidRegionCodes:(id)a0;
- (void)addSectionLocaleIdentifiers:(id)a0;
- (unsigned long long)sectionLocaleIdentifiersCount;
- (void)clearSectionLocaleIdentifiers;
- (id)sectionLocaleIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionValidRegionCodesCount;
- (void)clearSectionValidRegionCodes;
- (id)sectionValidRegionCodesAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionAttributionsCount;
- (void)clearSectionAttributions;
- (id)sectionAttributionsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionCitationsCount;
- (void)clearSectionCitations;
- (id)sectionCitationsAtIndex:(unsigned long long)a0;

@end
