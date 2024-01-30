@class NSString;

@interface GEORPButton : PBCodable <NSCopying> {
    NSString *_localizedText;
    int _buttonAction;
    struct { unsigned char has_buttonAction : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (nonatomic) BOOL hasButtonAction;
@property (nonatomic) int buttonAction;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsButtonAction:(id)a0;
- (id)buttonActionAsString:(int)a0;

@end
