@class GEOPBTransitArtwork, PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOAdvisoryCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artworkOverride;
    GEOFormattedString *_details;
    GEOFormattedString *_metadata;
    GEOFormattedString *_timeString;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_artworkOverride : 1; unsigned char read_details : 1; unsigned char read_metadata : 1; unsigned char read_timeString : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) GEOFormattedString *details;
@property (readonly, nonatomic) BOOL hasArtworkOverride;
@property (retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) GEOFormattedString *metadata;
@property (readonly, nonatomic) BOOL hasTimeString;
@property (retain, nonatomic) GEOFormattedString *timeString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
