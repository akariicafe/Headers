@class NSString;

@interface VKPShieldVariant : PBCodable <NSCopying> {
    struct { unsigned int x0; int x1; int x2; float x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    struct { float *list; unsigned long long count; unsigned long long size; } _centerPoints;
    struct { unsigned char textShadow : 1; unsigned char textStroke : 1; unsigned char fontColor : 1; unsigned char nonDigitFontColor : 1; unsigned char atlasIndex : 1; unsigned char backgroundColor : 1; unsigned char borderColor : 1; unsigned char capWidthLeft : 1; unsigned char capWidthRight : 1; unsigned char centerOffsetX : 1; unsigned char fontSize : 1; unsigned char lineSpacing : 1; unsigned char maxDigits : 1; unsigned char minDigits : 1; unsigned char nonDigitFontSize : 1; unsigned char paddingLeft : 1; unsigned char paddingRight : 1; unsigned char quadIndex : 1; unsigned char textBaseline : 1; unsigned char textMaskColor : 1; } _has;
}

@property (nonatomic) BOOL hasAtlasIndex;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) BOOL hasQuadIndex;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) BOOL hasMinDigits;
@property (nonatomic) unsigned int minDigits;
@property (nonatomic) BOOL hasMaxDigits;
@property (nonatomic) unsigned int maxDigits;
@property (nonatomic) BOOL hasTextBaseline;
@property (nonatomic) float textBaseline;
@property (nonatomic) BOOL hasCenterOffsetX;
@property (nonatomic) float centerOffsetX;
@property (readonly, nonatomic) BOOL hasFontName;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) BOOL hasFontSize;
@property (nonatomic) float fontSize;
@property (nonatomic) BOOL hasFontColor;
@property (nonatomic) struct { float _a; unsigned int _b; unsigned int _g; unsigned int _r; } fontColor;
@property (nonatomic) BOOL hasTextStroke;
@property (nonatomic) struct { struct { float _a; unsigned int _b; unsigned int _g; unsigned int _r; } _color; float _width; } textStroke;
@property (nonatomic) BOOL hasTextShadow;
@property (nonatomic) struct { struct { float _a; unsigned int _b; unsigned int _g; unsigned int _r; } _color; float _offsetX; float _offsetY; float _size; struct { unsigned char offsetX : 1; unsigned char offsetY : 1; } _has; } textShadow;
@property (readonly, nonatomic) BOOL hasNonDigitFontName;
@property (retain, nonatomic) NSString *nonDigitFontName;
@property (nonatomic) BOOL hasNonDigitFontSize;
@property (nonatomic) float nonDigitFontSize;
@property (readonly, nonatomic) unsigned long long centerPointsCount;
@property (readonly, nonatomic) float *centerPoints;
@property (readonly, nonatomic) unsigned long long layersCount;
@property (readonly, nonatomic) struct { unsigned int x0; int x1; int x2; float x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *layers;
@property (nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) BOOL hasBorderColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) BOOL hasCapWidthLeft;
@property (nonatomic) float capWidthLeft;
@property (nonatomic) BOOL hasCapWidthRight;
@property (nonatomic) float capWidthRight;
@property (nonatomic) BOOL hasPaddingLeft;
@property (nonatomic) float paddingLeft;
@property (nonatomic) BOOL hasPaddingRight;
@property (nonatomic) float paddingRight;
@property (nonatomic) BOOL hasTextMaskColor;
@property (nonatomic) int textMaskColor;
@property (nonatomic) BOOL hasLineSpacing;
@property (nonatomic) float lineSpacing;
@property (nonatomic) BOOL hasNonDigitFontColor;
@property (nonatomic) struct { float _a; unsigned int _b; unsigned int _g; unsigned int _r; } nonDigitFontColor;

- (void)addLayer:(struct { unsigned int x0; int x1; int x2; float x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearLayers;
- (void)clearCenterPoints;
- (float)centerPointAtIndex:(unsigned long long)a0;
- (void)addCenterPoint:(float)a0;
- (struct { unsigned int x0; int x1; int x2; float x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })layerAtIndex:(unsigned long long)a0;
- (void)setLayers:(struct { unsigned int x0; int x1; int x2; float x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *)a0 count:(unsigned long long)a1;
- (void)setCenterPoints:(float *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
