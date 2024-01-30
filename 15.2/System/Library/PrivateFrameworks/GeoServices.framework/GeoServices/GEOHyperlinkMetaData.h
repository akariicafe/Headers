@class NSString;

@interface GEOHyperlinkMetaData : PBCodable <NSCopying> {
    NSString *_displayedString;
    int _hyperlinkType;
    struct { unsigned char has_hyperlinkType : 1; } _flags;
}

@property (nonatomic) BOOL hasHyperlinkType;
@property (nonatomic) int hyperlinkType;
@property (readonly, nonatomic) BOOL hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (id)hyperlinkTypeAsString:(int)a0;
- (int)StringAsHyperlinkType:(id)a0;
- (id)dictionaryRepresentation;

@end
