@class PBDataReader, NSString, GEOLatLngE7, PBUnknownFields;

@interface GEOPDISO3166Code : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    GEOLatLngE7 *_location;
    NSString *_subdivisonCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isDisputed;
    struct { unsigned char has_isDisputed : 1; unsigned char read_unknownFields : 1; unsigned char read_countryCode : 1; unsigned char read_location : 1; unsigned char read_subdivisonCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
