@class PBUnknownFields;

@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedChildActions;
    int _maxChildItems;
    int _maxChildPlaces;
    BOOL _supportChildItems;
    struct { unsigned char has_maxChildItems : 1; unsigned char has_maxChildPlaces : 1; unsigned char has_supportChildItems : 1; } _flags;
}

@property (nonatomic) BOOL hasMaxChildPlaces;
@property (nonatomic) int maxChildPlaces;
@property (nonatomic) BOOL hasSupportChildItems;
@property (nonatomic) BOOL supportChildItems;
@property (nonatomic) BOOL hasMaxChildItems;
@property (nonatomic) int maxChildItems;
@property (readonly, nonatomic) unsigned long long supportedChildActionsCount;
@property (readonly, nonatomic) int *supportedChildActions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)setSupportedChildActions:(int *)a0 count:(unsigned long long)a1;
- (int)supportedChildActionAtIndex:(unsigned long long)a0;
- (id)supportedChildActionsAsString:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)addSupportedChildAction:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearSupportedChildActions;
- (id)initWithDictionary:(id)a0;
- (int)StringAsSupportedChildActions:(id)a0;

@end
