@class GEOABSecondPartyPlaceRequestClientMetaData, NSString, PBUnknownFields, PBDataReader, NSMutableArray, GEOABClientConfig;

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_assignments;
    unsigned long long _branchExpirationTtlHours;
    GEOABClientConfig *_clientConfig;
    GEOABSecondPartyPlaceRequestClientMetaData *_mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_rapClientMetadata;
    unsigned long long _refreshIntervalSeconds;
    NSString *_requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData *_siriClientMetadata;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _invalidatePoiCache;
    BOOL _invalidateTileCache;
    struct { unsigned char has_branchExpirationTtlHours : 1; unsigned char has_refreshIntervalSeconds : 1; unsigned char has_timestamp : 1; unsigned char has_invalidatePoiCache : 1; unsigned char has_invalidateTileCache : 1; unsigned char read_unknownFields : 1; unsigned char read_assignments : 1; unsigned char read_clientConfig : 1; unsigned char read_mapsAbClientMetadata : 1; unsigned char read_parsecClientMetadata : 1; unsigned char read_rapClientMetadata : 1; unsigned char read_requestGuid : 1; unsigned char read_siriClientMetadata : 1; unsigned char read_sourceURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) BOOL hasRequestGuid;
@property (retain, nonatomic) NSString *requestGuid;
@property (retain, nonatomic) NSMutableArray *assignments;
@property (nonatomic) BOOL hasInvalidateTileCache;
@property (nonatomic) BOOL invalidateTileCache;
@property (nonatomic) BOOL hasInvalidatePoiCache;
@property (nonatomic) BOOL invalidatePoiCache;
@property (nonatomic) BOOL hasRefreshIntervalSeconds;
@property (nonatomic) unsigned long long refreshIntervalSeconds;
@property (readonly, nonatomic) BOOL hasClientConfig;
@property (retain, nonatomic) GEOABClientConfig *clientConfig;
@property (readonly, nonatomic) BOOL hasParsecClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata;
@property (readonly, nonatomic) BOOL hasSiriClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata;
@property (readonly, nonatomic) BOOL hasRapClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata;
@property (readonly, nonatomic) BOOL hasMapsAbClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata;
@property (nonatomic) BOOL hasBranchExpirationTtlHours;
@property (nonatomic) unsigned long long branchExpirationTtlHours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)assignmentType;

- (id)_clientConfigValueForKey:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)assignmentAtIndex:(unsigned long long)a0;
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
- (void)clearAssignments;
- (void)addAssignment:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)assignmentsCount;

@end
