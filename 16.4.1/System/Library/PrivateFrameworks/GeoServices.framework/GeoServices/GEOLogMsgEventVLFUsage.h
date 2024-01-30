@class GEOVLFARFailureTypes, PBDataReader, GEOVLFInitializationFailureDetails, GEOVLFCorrection, GEOVLFEntryPoint, NSMutableArray, GEOVLFLocation;

@interface GEOLogMsgEventVLFUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOVLFPositionContextClassification { double _indoorProbability; double _outdoorProbability; int _type; struct { unsigned char indoorProbability : 1; unsigned char outdoorProbability : 1; unsigned char type : 1; } _has; } _initialPositionContextClassification;
    GEOVLFARFailureTypes *_arFailureTypes;
    NSMutableArray *_arStates;
    NSMutableArray *_deviceOrientations;
    GEOVLFEntryPoint *_entryPoint;
    GEOVLFLocation *_initialLocation;
    GEOVLFInitializationFailureDetails *_initializationFailureDetails;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_postFusionCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _finalState;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    struct { unsigned char has_initialPositionContextClassification : 1; unsigned char has_finalState : 1; unsigned char has_sessionTimeMs : 1; unsigned char has_timeRoundedToHour : 1; unsigned char read_arFailureTypes : 1; unsigned char read_arStates : 1; unsigned char read_deviceOrientations : 1; unsigned char read_entryPoint : 1; unsigned char read_initialLocation : 1; unsigned char read_initializationFailureDetails : 1; unsigned char read_localizationDetails : 1; unsigned char read_postFusionCorrection : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEntryPoint;
@property (retain, nonatomic) GEOVLFEntryPoint *entryPoint;
@property (nonatomic) BOOL hasSessionTimeMs;
@property (nonatomic) unsigned int sessionTimeMs;
@property (retain, nonatomic) NSMutableArray *localizationDetails;
@property (nonatomic) BOOL hasFinalState;
@property (nonatomic) int finalState;
@property (readonly, nonatomic) BOOL hasPostFusionCorrection;
@property (retain, nonatomic) GEOVLFCorrection *postFusionCorrection;
@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (nonatomic) unsigned int timeRoundedToHour;
@property (nonatomic) BOOL hasInitialPositionContextClassification;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } initialPositionContextClassification;
@property (readonly, nonatomic) BOOL hasInitializationFailureDetails;
@property (retain, nonatomic) GEOVLFInitializationFailureDetails *initializationFailureDetails;
@property (retain, nonatomic) NSMutableArray *arStates;
@property (retain, nonatomic) NSMutableArray *deviceOrientations;
@property (readonly, nonatomic) BOOL hasInitialLocation;
@property (retain, nonatomic) GEOVLFLocation *initialLocation;
@property (readonly, nonatomic) BOOL hasArFailureTypes;
@property (retain, nonatomic) GEOVLFARFailureTypes *arFailureTypes;

+ (BOOL)isValid:(id)a0;
+ (Class)arStateType;
+ (Class)deviceOrientationType;
+ (Class)localizationDetailsType;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsFinalState:(id)a0;
- (id)arStateAtIndex:(unsigned long long)a0;
- (void)addArState:(id)a0;
- (void)addDeviceOrientation:(id)a0;
- (void)addLocalizationDetails:(id)a0;
- (unsigned long long)arStatesCount;
- (void)clearArStates;
- (void)clearDeviceOrientations;
- (void)clearLocalizationDetails;
- (id)deviceOrientationAtIndex:(unsigned long long)a0;
- (unsigned long long)deviceOrientationsCount;
- (id)finalStateAsString:(int)a0;
- (id)localizationDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)localizationDetailsCount;

@end
