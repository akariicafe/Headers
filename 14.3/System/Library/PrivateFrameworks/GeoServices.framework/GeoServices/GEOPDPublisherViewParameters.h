@class GEOPDViewportInfo, GEOPDMapsIdentifier, GEOPDPublisherViewResultFilter, PBDataReader, PBUnknownFields;

@interface GEOPDPublisherViewParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDMapsIdentifier *_publisherId;
    GEOPDPublisherViewResultFilter *_resultFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numClientizedResults;
    struct { unsigned char has_numClientizedResults : 1; unsigned char read_unknownFields : 1; unsigned char read_publisherId : 1; unsigned char read_resultFilter : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPublisherId;
@property (retain, nonatomic) GEOPDMapsIdentifier *publisherId;
@property (nonatomic) BOOL hasNumClientizedResults;
@property (nonatomic) unsigned int numClientizedResults;
@property (readonly, nonatomic) BOOL hasResultFilter;
@property (retain, nonatomic) GEOPDPublisherViewResultFilter *resultFilter;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
