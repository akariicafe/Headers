@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    double _currentTimestamp;
    double _eventTimestamp;
    double _travelDuration;
    int _actionType;
    int _alertType;
    int _travelState;
    struct { unsigned char has_sessionID : 1; unsigned char has_currentTimestamp : 1; unsigned char has_eventTimestamp : 1; unsigned char has_travelDuration : 1; unsigned char has_actionType : 1; unsigned char has_alertType : 1; unsigned char has_travelState : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic) int alertType;
@property (nonatomic) BOOL hasTravelState;
@property (nonatomic) int travelState;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) double eventTimestamp;
@property (nonatomic) BOOL hasCurrentTimestamp;
@property (nonatomic) double currentTimestamp;
@property (nonatomic) BOOL hasTravelDuration;
@property (nonatomic) double travelDuration;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)actionTypeAsString:(int)a0;
- (int)StringAsActionType:(id)a0;
- (id)alertTypeAsString:(int)a0;
- (int)StringAsAlertType:(id)a0;
- (id)travelStateAsString:(int)a0;
- (int)StringAsTravelState:(id)a0;

@end
