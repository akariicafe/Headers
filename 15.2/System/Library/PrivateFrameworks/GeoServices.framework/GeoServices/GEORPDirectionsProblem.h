@class NSData, GEORPUserSearchInput, NSMutableArray, PBDataReader;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_clientSuggestedRoutes;
    NSData *_directionsResponseId;
    GEORPUserSearchInput *_endWaypoint;
    NSMutableArray *_instructionCorrections;
    NSData *_overviewScreenshotImageData;
    NSMutableArray *_problematicRouteIndexs;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _problematicLineIndex;
    unsigned int _problematicStepIndex;
    struct { unsigned char has_problematicLineIndex : 1; unsigned char has_problematicStepIndex : 1; unsigned char read_clientSuggestedRoutes : 1; unsigned char read_directionsResponseId : 1; unsigned char read_endWaypoint : 1; unsigned char read_instructionCorrections : 1; unsigned char read_overviewScreenshotImageData : 1; unsigned char read_problematicRouteIndexs : 1; unsigned char read_startWaypoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) BOOL hasOverviewScreenshotImageData;
@property (retain, nonatomic) NSData *overviewScreenshotImageData;
@property (nonatomic) BOOL hasProblematicStepIndex;
@property (nonatomic) unsigned int problematicStepIndex;
@property (retain, nonatomic) NSMutableArray *clientSuggestedRoutes;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (nonatomic) BOOL hasProblematicLineIndex;
@property (nonatomic) unsigned int problematicLineIndex;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;

+ (BOOL)isValid:(id)a0;
+ (Class)clientSuggestedRouteType;
+ (Class)problematicRouteIndexType;
+ (Class)instructionCorrectionType;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addClientSuggestedRoute:(id)a0;
- (unsigned long long)clientSuggestedRoutesCount;
- (void)clearClientSuggestedRoutes;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addProblematicRouteIndex:(id)a0;
- (void)addInstructionCorrection:(id)a0;
- (unsigned long long)problematicRouteIndexsCount;
- (void)clearProblematicRouteIndexs;
- (id)problematicRouteIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)instructionCorrectionsCount;
- (void)clearInstructionCorrections;
- (id)instructionCorrectionAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
