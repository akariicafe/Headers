@class NSString;

@interface GEOAPSessionData : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    double _createTimeInUse;
    double _createTime;
    double _mapsUserStartDate;
    NSString *_originHardwareClass;
    unsigned long long _sessionEpoch;
    unsigned int _opaqueAppId;
    struct { unsigned char has_sessionId : 1; unsigned char has_createTimeInUse : 1; unsigned char has_createTime : 1; unsigned char has_mapsUserStartDate : 1; unsigned char has_sessionEpoch : 1; unsigned char has_opaqueAppId : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) BOOL hasMapsUserStartDate;
@property (nonatomic) double mapsUserStartDate;
@property (nonatomic) BOOL hasOpaqueAppId;
@property (nonatomic) unsigned int opaqueAppId;
@property (readonly, nonatomic) BOOL hasOriginHardwareClass;
@property (retain, nonatomic) NSString *originHardwareClass;
@property (nonatomic) BOOL hasCreateTimeInUse;
@property (nonatomic) double createTimeInUse;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
