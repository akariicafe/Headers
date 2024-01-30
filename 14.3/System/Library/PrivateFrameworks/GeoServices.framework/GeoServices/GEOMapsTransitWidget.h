@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable <NSCopying> {
    NSMutableArray *_transitIncidentItems;
    int _tappedItemIndex;
    int _transitMessageType;
    BOOL _everExpanded;
    BOOL _initiallyExpanded;
    struct { unsigned char has_tappedItemIndex : 1; unsigned char has_transitMessageType : 1; unsigned char has_everExpanded : 1; unsigned char has_initiallyExpanded : 1; } _flags;
}

@property (nonatomic) BOOL hasTransitMessageType;
@property (nonatomic) int transitMessageType;
@property (retain, nonatomic) NSMutableArray *transitIncidentItems;
@property (nonatomic) BOOL hasInitiallyExpanded;
@property (nonatomic) BOOL initiallyExpanded;
@property (nonatomic) BOOL hasEverExpanded;
@property (nonatomic) BOOL everExpanded;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (Class)transitIncidentItemType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addTransitIncidentItem:(id)a0;
- (unsigned long long)transitIncidentItemsCount;
- (void)clearTransitIncidentItems;
- (id)transitIncidentItemAtIndex:(unsigned long long)a0;
- (id)transitMessageTypeAsString:(int)a0;
- (int)StringAsTransitMessageType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
