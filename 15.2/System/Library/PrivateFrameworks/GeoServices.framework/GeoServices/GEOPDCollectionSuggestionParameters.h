@class PBDataReader, GEOPDViewportInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDCollectionSuggestionParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categoryIds;
    NSMutableArray *_geoIds;
    NSMutableArray *_publisherIds;
    double _requestLocalTimestamp;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_requestLocalTimestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_categoryIds : 1; unsigned char read_geoIds : 1; unsigned char read_publisherIds : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
