@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {
    NSMutableArray *_proactiveItems;
    int _duration;
    int _interactedItemIndex;
    int _listType;
    struct { unsigned char has_duration : 1; unsigned char has_interactedItemIndex : 1; unsigned char has_listType : 1; } _flags;
}

@property (nonatomic) BOOL hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *proactiveItems;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) int duration;
@property (nonatomic) BOOL hasInteractedItemIndex;
@property (nonatomic) int interactedItemIndex;

+ (Class)proactiveItemType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addProactiveItem:(id)a0;
- (unsigned long long)proactiveItemsCount;
- (void)clearProactiveItems;
- (id)proactiveItemAtIndex:(unsigned long long)a0;
- (id)listTypeAsString:(int)a0;
- (int)StringAsListType:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
