@class GEOPDViewportInfo, NSString, PBDataReader, GEOStructuredAddress, PBUnknownFields;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxResults;
    struct { unsigned char has_maxResults : 1; unsigned char read_unknownFields : 1; unsigned char read_queryString : 1; unsigned char read_structuredAddress : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasQueryString;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) BOOL hasStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)initWithForwardGeocodeAddress:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)initWithForwardGeocodeAddressString:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithForwardGeocodeAddress:(id)a0 addressString:(id)a1 maxResults:(unsigned int)a2 traits:(id)a3;
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
