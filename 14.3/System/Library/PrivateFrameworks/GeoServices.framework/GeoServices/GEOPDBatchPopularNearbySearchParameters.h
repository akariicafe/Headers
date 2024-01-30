@class GEOPDViewportInfo, PBDataReader, NSMutableArray, PBUnknownFields;

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

@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (retain, nonatomic) NSMutableArray *suggestionEntryMetadatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)suggestionEntryMetadataType;
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
- (void)addSuggestionEntryMetadata:(id)a0;
- (unsigned long long)suggestionEntryMetadatasCount;
- (void)clearSuggestionEntryMetadatas;
- (id)suggestionEntryMetadataAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;

@end
