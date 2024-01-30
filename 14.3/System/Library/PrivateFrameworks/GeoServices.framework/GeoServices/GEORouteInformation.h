@class PBDataReader, NSString, GEOFormattedString, PBUnknownFields;

@interface GEORouteInformation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    GEOFormattedString *_distance;
    GEOFormattedString *_duration;
    GEOFormattedString *_routeDescription;
    NSString *_separator;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_detail : 1; unsigned char read_distance : 1; unsigned char read_duration : 1; unsigned char read_routeDescription : 1; unsigned char read_separator : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDuration;
@property (retain, nonatomic) GEOFormattedString *duration;
@property (readonly, nonatomic) BOOL hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) BOOL hasDistance;
@property (retain, nonatomic) GEOFormattedString *distance;
@property (readonly, nonatomic) BOOL hasRouteDescription;
@property (retain, nonatomic) GEOFormattedString *routeDescription;
@property (readonly, nonatomic) BOOL hasSeparator;
@property (retain, nonatomic) NSString *separator;
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
