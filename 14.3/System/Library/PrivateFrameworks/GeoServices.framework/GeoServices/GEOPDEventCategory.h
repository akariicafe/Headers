@class NSMutableArray, PBUnknownFields;

@interface GEOPDEventCategory : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedCategorys;
    int _eventLookupCategory;
    struct { unsigned char has_eventLookupCategory : 1; } _flags;
}

@property (nonatomic) BOOL hasEventLookupCategory;
@property (nonatomic) int eventLookupCategory;
@property (retain, nonatomic) NSMutableArray *localizedCategorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)localizedCategoryType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearLocalizedCategorys;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)localizedCategoryAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)eventLookupCategoryAsString:(int)a0;
- (int)StringAsEventLookupCategory:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (void)addLocalizedCategory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)localizedCategorysCount;

@end
