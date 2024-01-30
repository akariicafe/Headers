@class NSString, NSMutableArray;

@interface HKCodableOntologyEducationContentSection : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) BOOL hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (retain, nonatomic) NSMutableArray *localeIdentifiers;
@property (retain, nonatomic) NSMutableArray *validRegionCodes;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *citations;

+ (Class)attributionsType;
+ (Class)localeIdentifiersType;
+ (Class)validRegionCodesType;
+ (Class)citationsType;

- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)addCitations:(id)a0;
- (void)addLocaleIdentifiers:(id)a0;
- (void)addValidRegionCodes:(id)a0;
- (void)addAttributions:(id)a0;
- (unsigned long long)localeIdentifiersCount;
- (void)clearLocaleIdentifiers;
- (id)attributionsAtIndex:(unsigned long long)a0;
- (id)localeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)validRegionCodesCount;
- (void)clearValidRegionCodes;
- (id)validRegionCodesAtIndex:(unsigned long long)a0;
- (unsigned long long)citationsCount;
- (void)clearCitations;
- (id)citationsAtIndex:(unsigned long long)a0;
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
