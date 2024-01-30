@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _navSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _preSyncSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    double _ageOfSessionIdInSeconds;
    GEOLocalTime *_eventTime;
    double _navSessionRelativeTimestamp;
    double _relativeTimestamp;
    unsigned long long _sessionEpoch;
    unsigned int _sequenceNumber;
    struct { unsigned char has_navSessionId : 1; unsigned char has_preSyncSessionId : 1; unsigned char has_sessionId : 1; unsigned char has_ageOfSessionIdInSeconds : 1; unsigned char has_navSessionRelativeTimestamp : 1; unsigned char has_relativeTimestamp : 1; unsigned char has_sessionEpoch : 1; unsigned char has_sequenceNumber : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } navSessionId;
@property (nonatomic) BOOL hasNavSessionRelativeTimestamp;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasEventTime;
@property (retain, nonatomic) GEOLocalTime *eventTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) BOOL hasAgeOfSessionIdInSeconds;
@property (nonatomic) double ageOfSessionIdInSeconds;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;

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
