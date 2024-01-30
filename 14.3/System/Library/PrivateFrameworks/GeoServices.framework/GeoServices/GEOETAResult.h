@class PBDataReader, GEOPlaceSearchResponse, NSMutableArray, PBUnknownFields;

@interface GEOETAResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSMutableArray *_sortedETAs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    int _status;
    struct { unsigned char has_distance : 1; unsigned char has_historicTravelTime : 1; unsigned char has_liveTravelTime : 1; unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_placeSearchResponse : 1; unsigned char read_sortedETAs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasLiveTravelTime;
@property (nonatomic) unsigned int liveTravelTime;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) NSMutableArray *sortedETAs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)sortedETAType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)sortedETAsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearSortedETAs;
- (void)addSortedETA:(id)a0;
- (id)sortedETAAtIndex:(unsigned long long)a0;

@end
