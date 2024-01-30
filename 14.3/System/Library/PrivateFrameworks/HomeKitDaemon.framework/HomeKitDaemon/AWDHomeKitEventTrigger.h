@class NSMutableArray, AWDHomeKitPredicate;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying> {
    struct { unsigned char activationState : 1; unsigned char activationType : 1; unsigned char containsRecurrences : 1; unsigned char executeOnce : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasExecuteOnce;
@property (nonatomic) BOOL executeOnce;
@property (nonatomic) BOOL hasContainsRecurrences;
@property (nonatomic) BOOL containsRecurrences;
@property (readonly, nonatomic) BOOL hasPredicate;
@property (retain, nonatomic) AWDHomeKitPredicate *predicate;
@property (nonatomic) BOOL hasActivationState;
@property (nonatomic) int activationState;
@property (nonatomic) BOOL hasActivationType;
@property (nonatomic) int activationType;

+ (Class)eventsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)eventsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (id)activationStateAsString:(int)a0;
- (int)StringAsActivationState:(id)a0;
- (id)activationTypeAsString:(int)a0;
- (int)StringAsActivationType:(id)a0;

@end
