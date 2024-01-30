@class NSString, GEOPDDatasetABStatus, PBDataReader, PBUnknownFields, NSMutableArray, GEOETAResult, GEOPlaceSearchResponse, GEOClientMetrics, GEOETAServiceResponseSummary;

@interface GEOETAResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    unsigned long long _debugServerLatencyMs;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_debugServerLatencyMs : 1; unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_problemDetails : 1; unsigned char read_clientMetrics : 1; unsigned char read_datasetAbStatus : 1; unsigned char read_debugData : 1; unsigned char read_etaResultReferencePointDestinations : 1; unsigned char read_etaResultReferencePointOrigin : 1; unsigned char read_etaResults : 1; unsigned char read_etaServiceSummary : 1; unsigned char read_originPlaceSearchResponse : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic) BOOL hasDebugServerLatencyMs;
@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *etaResults;
@property (readonly, nonatomic) BOOL hasOriginPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (readonly, nonatomic) unsigned long long problemDetailsCount;
@property (readonly, nonatomic) struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *problemDetails;
@property (readonly, nonatomic) BOOL hasEtaResultReferencePointOrigin;
@property (retain, nonatomic) GEOETAResult *etaResultReferencePointOrigin;
@property (retain, nonatomic) NSMutableArray *etaResultReferencePointDestinations;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugData;
@property (retain, nonatomic) NSString *debugData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)etaResultType;
+ (Class)etaResultReferencePointDestinationType;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)etaResultAtIndex:(unsigned long long)a0;
- (unsigned long long)etaResultsCount;
- (void)clearProblemDetails;
- (void)addProblemDetail:(struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })problemDetailAtIndex:(unsigned long long)a0;
- (void)setProblemDetails:(struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEtaResult:(id)a0;
- (id)init;
- (void)addEtaResultReferencePointDestination:(id)a0;
- (void)clearEtaResults;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (void)clearEtaResultReferencePointDestinations;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
