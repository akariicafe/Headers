@class NSString, GEOPDSearchTokenSet, GEOLatLng, PBDataReader;

@interface GEOPDSearchBusinessIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _businessId;
    GEOLatLng *_center;
    NSString *_name;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _businessType;
    struct { unsigned char has_businessId : 1; unsigned char has_businessType : 1; unsigned char read_center : 1; unsigned char read_name : 1; unsigned char read_tokenSet : 1; unsigned char wrote_anyField : 1; } _flags;
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
