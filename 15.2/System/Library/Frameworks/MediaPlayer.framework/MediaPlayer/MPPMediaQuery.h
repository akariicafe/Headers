@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {
    struct { unsigned char entityOrder : 1; unsigned char groupingType : 1; unsigned char staticEntityType : 1; unsigned char filteringDisabled : 1; unsigned char includeNonLibraryEntities : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *filterPredicates;
@property (nonatomic) BOOL hasGroupingType;
@property (nonatomic) int groupingType;
@property (nonatomic) BOOL hasFilteringDisabled;
@property (nonatomic) BOOL filteringDisabled;
@property (nonatomic) BOOL hasEntityOrder;
@property (nonatomic) int entityOrder;
@property (retain, nonatomic) NSMutableArray *staticEntityIdentifiers;
@property (nonatomic) BOOL hasStaticEntityType;
@property (nonatomic) int staticEntityType;
@property (nonatomic) BOOL hasIncludeNonLibraryEntities;
@property (nonatomic) BOOL includeNonLibraryEntities;

+ (Class)filterPredicatesType;
+ (Class)staticEntityIdentifiersType;

- (void)clearFilterPredicates;
- (unsigned long long)filterPredicatesCount;
- (id)filterPredicatesAtIndex:(unsigned long long)a0;
- (id)groupingTypeAsString:(int)a0;
- (int)StringAsGroupingType:(id)a0;
- (id)entityOrderAsString:(int)a0;
- (int)StringAsEntityOrder:(id)a0;
- (void)clearStaticEntityIdentifiers;
- (void)addStaticEntityIdentifiers:(id)a0;
- (unsigned long long)staticEntityIdentifiersCount;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)a0;
- (id)staticEntityTypeAsString:(int)a0;
- (int)StringAsStaticEntityType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addFilterPredicates:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
