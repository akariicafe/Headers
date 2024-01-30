@class GEOVLFCorrection, GEOVLFEntryPoint, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventVLFUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOVLFEntryPoint *_entryPoint;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_postFusionCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _finalState;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    struct { unsigned char has_finalState : 1; unsigned char has_sessionTimeMs : 1; unsigned char has_timeRoundedToHour : 1; unsigned char read_entryPoint : 1; unsigned char read_localizationDetails : 1; unsigned char read_postFusionCorrection : 1; unsigned char wrote_anyField : 1; } _flags;
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

+ (Class)localizationDetailsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addLocalizationDetails:(id)a0;
- (unsigned long long)localizationDetailsCount;
- (void)clearLocalizationDetails;
- (id)localizationDetailsAtIndex:(unsigned long long)a0;
- (id)finalStateAsString:(int)a0;
- (int)StringAsFinalState:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
