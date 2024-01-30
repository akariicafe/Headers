@class NSString;

@interface VKPGenericShieldVariant : PBCodable <NSCopying> {
    struct { unsigned int x0; float x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    struct { unsigned char fontSize : 1; unsigned char leftCapWidth : 1; unsigned char leftPadding : 1; unsigned char lineSpacing : 1; unsigned char numberOfLines : 1; unsigned char rightCapWidth : 1; unsigned char rightPadding : 1; unsigned char textBaseline : 1; } _has;
}

@property (nonatomic) BOOL hasNumberOfLines;
@property (nonatomic) unsigned int numberOfLines;
@property (readonly, nonatomic) unsigned long long layersCount;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *layers;
@property (nonatomic) BOOL hasTextBaseline;
@property (nonatomic) float textBaseline;
@property (readonly, nonatomic) BOOL hasFontName;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) BOOL hasFontSize;
@property (nonatomic) float fontSize;
@property (nonatomic) BOOL hasLeftCapWidth;
@property (nonatomic) float leftCapWidth;
@property (nonatomic) BOOL hasRightCapWidth;
@property (nonatomic) float rightCapWidth;
@property (nonatomic) BOOL hasLineSpacing;
@property (nonatomic) float lineSpacing;
@property (nonatomic) BOOL hasLeftPadding;
@property (nonatomic) float leftPadding;
@property (nonatomic) BOOL hasRightPadding;
@property (nonatomic) float rightPadding;

- (void)addLayer:(struct { unsigned int x0; float x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearLayers;
- (struct { unsigned int x0; float x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })layerAtIndex:(unsigned long long)a0;
- (void)setLayers:(struct { unsigned int x0; float x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
