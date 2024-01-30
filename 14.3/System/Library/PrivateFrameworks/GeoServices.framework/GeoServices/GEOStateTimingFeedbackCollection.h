@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    double _durationInOldState;
    double _sessionRelativeTimestamp;
    NSMutableArray *_stateTransitions;
    struct { unsigned char has_sessionID : 1; unsigned char has_durationInOldState : 1; unsigned char has_sessionRelativeTimestamp : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (retain, nonatomic) NSMutableArray *stateTransitions;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;

+ (Class)stateTransitionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
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
- (void)addStateTransition:(id)a0;
- (unsigned long long)stateTransitionsCount;
- (void)clearStateTransitions;
- (id)stateTransitionAtIndex:(unsigned long long)a0;

@end
