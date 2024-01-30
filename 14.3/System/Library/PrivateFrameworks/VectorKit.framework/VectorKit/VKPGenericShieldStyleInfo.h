@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _textDropShadowOffsets;
    struct { unsigned char backgroundColor : 1; unsigned char borderColor : 1; unsigned char style : 1; unsigned char textColor : 1; unsigned char textDropShadowColor : 1; unsigned char textDropShadowSize : 1; unsigned char textStrokeColor : 1; unsigned char textStrokeSize : 1; } _has;
}

@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) BOOL hasBorderColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) BOOL hasTextColor;
@property (nonatomic) unsigned int textColor;
@property (nonatomic) BOOL hasTextStrokeSize;
@property (nonatomic) float textStrokeSize;
@property (nonatomic) BOOL hasTextStrokeColor;
@property (nonatomic) unsigned int textStrokeColor;
@property (readonly, nonatomic) unsigned long long textDropShadowOffsetsCount;
@property (readonly, nonatomic) float *textDropShadowOffsets;
@property (nonatomic) BOOL hasTextDropShadowSize;
@property (nonatomic) float textDropShadowSize;
@property (nonatomic) BOOL hasTextDropShadowColor;
@property (nonatomic) unsigned int textDropShadowColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (void)clearTextDropShadowOffsets;
- (float)textDropShadowOffsetAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addTextDropShadowOffset:(float)a0;
- (id)dictionaryRepresentation;
- (void)setTextDropShadowOffsets:(float *)a0 count:(unsigned long long)a1;

@end
