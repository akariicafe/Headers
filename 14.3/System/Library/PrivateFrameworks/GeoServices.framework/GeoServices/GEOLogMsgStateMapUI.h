@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {
    GEOMultiTabsState *_multiTabsState;
    int _layoutInfo;
    int _layoutStyle;
    BOOL _landscape;
    struct { unsigned char has_layoutInfo : 1; unsigned char has_layoutStyle : 1; unsigned char has_landscape : 1; } _flags;
}

@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) int layoutInfo;
@property (readonly, nonatomic) BOOL hasMultiTabsState;
@property (retain, nonatomic) GEOMultiTabsState *multiTabsState;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) int layoutStyle;
@property (nonatomic) BOOL hasLandscape;
@property (nonatomic) BOOL landscape;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)layoutInfoAsString:(int)a0;
- (id)jsonRepresentation;
- (id)layoutStyleAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsLayoutInfo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsLayoutStyle:(id)a0;

@end
