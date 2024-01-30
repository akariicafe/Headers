@class GEOPlaceActionDetails, NSString, PBDataReader;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    struct { int *list; unsigned long long count; unsigned long long size; } _unactionableUiElements;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_placecardCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placecardType;
    BOOL _transitAdvisoryBanner;
    struct { unsigned char has_placecardType : 1; unsigned char has_transitAdvisoryBanner : 1; unsigned char read_possibleActions : 1; unsigned char read_unactionableUiElements : 1; unsigned char read_placeActionDetails : 1; unsigned char read_placecardCategory : 1; unsigned char wrote_anyField : 1; } _flags;
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

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)clearPossibleActions;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (id)placecardTypeAsString:(int)a0;
- (int)StringAsPlacecardType:(id)a0;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;
- (id)possibleActionsAsString:(int)a0;
- (int)StringAsPossibleActions:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnactionableUiElements;
- (int)unactionableUiElementAtIndex:(unsigned long long)a0;
- (void)setUnactionableUiElements:(int *)a0 count:(unsigned long long)a1;
- (id)unactionableUiElementsAsString:(int)a0;
- (int)StringAsUnactionableUiElements:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPossibleAction:(int)a0;
- (void)addUnactionableUiElement:(int)a0;
- (id)initWithDictionary:(id)a0;

@end
