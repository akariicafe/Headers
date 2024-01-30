@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct { unsigned char has_durationInOldState : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *stateTransitionFeedbacks;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;

+ (BOOL)isValid:(id)a0;
+ (Class)stateTransitionFeedbackType;

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
- (void)addStateTransitionFeedback:(id)a0;
- (unsigned long long)stateTransitionFeedbacksCount;
- (void)clearStateTransitionFeedbacks;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
