@class NSString, NSMutableArray;

@interface AWDProactiveAppPredictionActionTimeEstimateContainer : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _launchReasons;
    struct { int *list; unsigned long long count; unsigned long long size; } _sessionIndexs;
    struct { int *list; unsigned long long count; unsigned long long size; } _sessionLengths;
    struct { int *list; unsigned long long count; unsigned long long size; } _timeEstimates;
    struct { unsigned char actionType : 1; unsigned char noMatchCount : 1; } _has;
}

@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSMutableArray *parameters;
@property (readonly, nonatomic) unsigned long long timeEstimatesCount;
@property (readonly, nonatomic) int *timeEstimates;
@property (readonly, nonatomic) unsigned long long sessionLengthsCount;
@property (readonly, nonatomic) int *sessionLengths;
@property (readonly, nonatomic) unsigned long long sessionIndexsCount;
@property (readonly, nonatomic) int *sessionIndexs;
@property (nonatomic) BOOL hasNoMatchCount;
@property (nonatomic) int noMatchCount;
@property (readonly, nonatomic) unsigned long long launchReasonsCount;
@property (readonly, nonatomic) int *launchReasons;

+ (Class)parameterType;

- (id)actionTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsActionType:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameter:(id)a0;
- (id)parameterAtIndex:(unsigned long long)a0;
- (int)StringAsLaunchReasons:(id)a0;
- (void)addLaunchReason:(int)a0;
- (void)addSessionIndex:(int)a0;
- (void)addSessionLength:(int)a0;
- (void)addTimeEstimate:(int)a0;
- (void)clearLaunchReasons;
- (void)clearSessionIndexs;
- (void)clearSessionLengths;
- (void)clearTimeEstimates;
- (int)launchReasonAtIndex:(unsigned long long)a0;
- (id)launchReasonsAsString:(int)a0;
- (int)sessionIndexAtIndex:(unsigned long long)a0;
- (int)sessionLengthAtIndex:(unsigned long long)a0;
- (void)setLaunchReasons:(int *)a0 count:(unsigned long long)a1;
- (void)setSessionIndexs:(int *)a0 count:(unsigned long long)a1;
- (void)setSessionLengths:(int *)a0 count:(unsigned long long)a1;
- (void)setTimeEstimates:(int *)a0 count:(unsigned long long)a1;
- (int)timeEstimateAtIndex:(unsigned long long)a0;

@end
