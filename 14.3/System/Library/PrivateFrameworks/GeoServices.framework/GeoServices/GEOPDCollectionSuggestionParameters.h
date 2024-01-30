@class GEOPDViewportInfo, PBDataReader, NSMutableArray, PBUnknownFields;

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

@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (retain, nonatomic) NSMutableArray *publisherIds;
@property (retain, nonatomic) NSMutableArray *geoIds;
@property (retain, nonatomic) NSMutableArray *categoryIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)publisherIdType;
+ (Class)geoIdType;
+ (Class)categoryIdType;
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
- (void)addPublisherId:(id)a0;
- (unsigned long long)publisherIdsCount;
- (void)clearPublisherIds;
- (id)publisherIdAtIndex:(unsigned long long)a0;
- (void)addGeoId:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)geoIdsCount;
- (void)clearGeoIds;
- (id)initWithDictionary:(id)a0;
- (void)addCategoryId:(id)a0;
- (id)geoIdAtIndex:(unsigned long long)a0;
- (unsigned long long)categoryIdsCount;
- (void)clearCategoryIds;
- (id)categoryIdAtIndex:(unsigned long long)a0;

@end
