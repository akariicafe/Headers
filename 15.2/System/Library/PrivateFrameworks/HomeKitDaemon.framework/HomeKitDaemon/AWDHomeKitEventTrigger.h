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

- (unsigned long long)eventsCount;
- (void)addEvents:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearEvents;
- (id)dictionaryRepresentation;
- (id)activationStateAsString:(int)a0;
- (int)StringAsActivationState:(id)a0;
- (id)activationTypeAsString:(int)a0;
- (int)StringAsActivationType:(id)a0;

@end
