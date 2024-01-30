@interface GEOLogMsgStateTransit : PBCodable <NSCopying> {
    BOOL _transitNotAvailableAdvisoryShowing;
    struct { unsigned char has_transitNotAvailableAdvisoryShowing : 1; } _flags;
}

@property (nonatomic) BOOL hasTransitNotAvailableAdvisoryShowing;
@property (nonatomic) BOOL transitNotAvailableAdvisoryShowing;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
