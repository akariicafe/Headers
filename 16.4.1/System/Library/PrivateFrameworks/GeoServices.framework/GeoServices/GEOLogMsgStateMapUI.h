@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {
    GEOMultiTabsState *_multiTabsState;
    int _layoutInfo;
    int _layoutStyle;
    unsigned int _numberOfMapsWindows;
    int _windowSize;
    BOOL _landscape;
    struct { unsigned char has_layoutInfo : 1; unsigned char has_layoutStyle : 1; unsigned char has_numberOfMapsWindows : 1; unsigned char has_windowSize : 1; unsigned char has_landscape : 1; } _flags;
}

@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) int layoutInfo;
@property (readonly, nonatomic) BOOL hasMultiTabsState;
@property (retain, nonatomic) GEOMultiTabsState *multiTabsState;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) int layoutStyle;
@property (nonatomic) BOOL hasLandscape;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL hasNumberOfMapsWindows;
@property (nonatomic) unsigned int numberOfMapsWindows;
@property (nonatomic) BOOL hasWindowSize;
@property (nonatomic) int windowSize;

+ (BOOL)isValid:(id)a0;

- (id)windowSizeAsString:(int)a0;
- (int)StringAsWindowSize:(id)a0;
- (id)layoutStyleAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsLayoutStyle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsLayoutInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)layoutInfoAsString:(int)a0;

@end
