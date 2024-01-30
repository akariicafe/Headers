@class GEOPlaceActionDetails, NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _containedChildrenPois;
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    struct { int *list; unsigned long long count; unsigned long long size; } _unactionableUiElements;
    NSMutableArray *_modules;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_placecardCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placecardType;
    BOOL _transitAdvisoryBanner;
    struct { unsigned char has_placecardType : 1; unsigned char has_transitAdvisoryBanner : 1; unsigned char read_containedChildrenPois : 1; unsigned char read_possibleActions : 1; unsigned char read_unactionableUiElements : 1; unsigned char read_modules : 1; unsigned char read_placeActionDetails : 1; unsigned char read_placecardCategory : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceActionDetails;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property (readonly, nonatomic) unsigned long long possibleActionsCount;
@property (readonly, nonatomic) int *possibleActions;
@property (readonly, nonatomic) unsigned long long unactionableUiElementsCount;
@property (readonly, nonatomic) int *unactionableUiElements;
@property (readonly, nonatomic) BOOL hasPlacecardCategory;
@property (retain, nonatomic) NSString *placecardCategory;
@property (nonatomic) BOOL hasPlacecardType;
@property (nonatomic) int placecardType;
@property (nonatomic) BOOL hasTransitAdvisoryBanner;
@property (nonatomic) BOOL transitAdvisoryBanner;
@property (readonly, nonatomic) unsigned long long containedChildrenPoisCount;
@property (readonly, nonatomic) unsigned long long *containedChildrenPois;
@property (retain, nonatomic) NSMutableArray *modules;

+ (BOOL)isValid:(id)a0;
+ (Class)modulesType;

- (void)addModules:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearModules;
- (void)addUnactionableUiElement:(int)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)modulesCount;
- (void)clearPossibleActions;
- (void)addPossibleAction:(int)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)modulesAtIndex:(unsigned long long)a0;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;
- (id)possibleActionsAsString:(int)a0;
- (int)StringAsPossibleActions:(id)a0;
- (id)placecardTypeAsString:(int)a0;
- (int)StringAsPlacecardType:(id)a0;
- (void)addContainedChildrenPois:(unsigned long long)a0;
- (void)clearUnactionableUiElements;
- (int)unactionableUiElementAtIndex:(unsigned long long)a0;
- (void)clearContainedChildrenPois;
- (unsigned long long)containedChildrenPoisAtIndex:(unsigned long long)a0;
- (void)setUnactionableUiElements:(int *)a0 count:(unsigned long long)a1;
- (id)unactionableUiElementsAsString:(int)a0;
- (int)StringAsUnactionableUiElements:(id)a0;
- (void)setContainedChildrenPois:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)dictionaryRepresentation;

@end
