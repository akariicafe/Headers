@class NSString, PBDataReader;

@interface GEOLogMsgEventThrottle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdentifier;
    double _throttleDuration;
    NSString *_throttleReqType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _networkService;
    unsigned int _throttleCount;
    int _throttleMode;
    unsigned int _throttleTriggerCount;
    unsigned int _throttleTriggerDuration;
    int _throttleType;
    unsigned int _tilesetId;
    struct { unsigned char has_throttleDuration : 1; unsigned char has_networkService : 1; unsigned char has_throttleCount : 1; unsigned char has_throttleMode : 1; unsigned char has_throttleTriggerCount : 1; unsigned char has_throttleTriggerDuration : 1; unsigned char has_throttleType : 1; unsigned char has_tilesetId : 1; unsigned char read_manifestEnv : 1; unsigned char read_requestAppIdentifier : 1; unsigned char read_throttleReqType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasNetworkService;
@property (nonatomic) int networkService;
@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (readonly, nonatomic) BOOL hasManifestEnv;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) BOOL hasTilesetId;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) BOOL hasThrottleType;
@property (nonatomic) int throttleType;
@property (nonatomic) BOOL hasThrottleMode;
@property (nonatomic) int throttleMode;
@property (readonly, nonatomic) BOOL hasThrottleReqType;
@property (retain, nonatomic) NSString *throttleReqType;
@property (nonatomic) BOOL hasThrottleTriggerCount;
@property (nonatomic) unsigned int throttleTriggerCount;
@property (nonatomic) BOOL hasThrottleTriggerDuration;
@property (nonatomic) unsigned int throttleTriggerDuration;
@property (nonatomic) BOOL hasThrottleCount;
@property (nonatomic) unsigned int throttleCount;
@property (nonatomic) BOOL hasThrottleDuration;
@property (nonatomic) double throttleDuration;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)networkServiceAsString:(int)a0;
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
- (int)StringAsNetworkService:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsThrottleMode:(id)a0;
- (int)StringAsThrottleType:(id)a0;
- (id)throttleModeAsString:(int)a0;
- (id)throttleTypeAsString:(int)a0;

@end
