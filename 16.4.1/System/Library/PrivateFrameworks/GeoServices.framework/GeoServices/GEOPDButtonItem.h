@class GEOPDQuickLinkParams, GEOPDGroupParams, PBDataReader, PBUnknownFields;

@interface GEOPDButtonItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDGroupParams *_groupParams;
    GEOPDQuickLinkParams *_quickLinkParams;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _buttonType;
    struct { unsigned char has_buttonType : 1; unsigned char read_unknownFields : 1; unsigned char read_groupParams : 1; unsigned char read_quickLinkParams : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasButtonType;
@property (nonatomic) int buttonType;
@property (readonly, nonatomic) BOOL hasQuickLinkParams;
@property (retain, nonatomic) GEOPDQuickLinkParams *quickLinkParams;
@property (readonly, nonatomic) BOOL hasGroupParams;
@property (retain, nonatomic) GEOPDGroupParams *groupParams;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (int)StringAsButtonType:(id)a0;
- (id)buttonTypeAsString:(int)a0;
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
