@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _minZoom;
    struct { unsigned char has_minZoom : 1; unsigned char read_unknownFields : 1; unsigned char read_labelLanguage : 1; unsigned char read_labelText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMinZoom;
@property (nonatomic) unsigned int minZoom;
@property (readonly, nonatomic) BOOL hasLabelLanguage;
@property (retain, nonatomic) NSString *labelLanguage;
@property (readonly, nonatomic) BOOL hasLabelText;
@property (retain, nonatomic) NSString *labelText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
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
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
