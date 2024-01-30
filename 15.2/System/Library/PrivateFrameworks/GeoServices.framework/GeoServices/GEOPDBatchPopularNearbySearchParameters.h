@class PBDataReader, GEOPDViewportInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    NSMutableArray *_suggestionEntryMetadatas;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxResults;
    struct { unsigned char has_requestLocalTimestamp : 1; unsigned char has_maxResults : 1; unsigned char read_unknownFields : 1; unsigned char read_suggestionEntryMetadatas : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
