@class SISchemaUIStatePresenting, SISchemaUIStateDismissed, NSData;

@interface SISchemaUIStateTransition : SISchemaInstrumentationMessage {
    struct { unsigned char currentState : 1; unsigned char previousState : 1; unsigned char siriPresentationType : 1; unsigned char dismissalReason : 1; } _has;
}

@property (nonatomic) int currentState;
@property (nonatomic) BOOL hasCurrentState;
@property (nonatomic) int previousState;
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) int siriPresentationType;
@property (nonatomic) BOOL hasSiriPresentationType;
@property (nonatomic) int dismissalReason;
@property (nonatomic) BOOL hasDismissalReason;
@property (retain, nonatomic) SISchemaUIStatePresenting *presenting;
@property (nonatomic) BOOL hasPresenting;
@property (retain, nonatomic) SISchemaUIStateDismissed *dismissed;
@property (nonatomic) BOOL hasDismissed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPresentationstate;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
