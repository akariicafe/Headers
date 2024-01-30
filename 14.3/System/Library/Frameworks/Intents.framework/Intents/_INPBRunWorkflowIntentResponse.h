@class NSArray, _INPBArchivedObject, NSString;

@interface _INPBRunWorkflowIntentResponse : PBCodable <_INPBRunWorkflowIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char continueRunning : 1; unsigned char requestsIntentExecution : 1; unsigned char waitingForResume : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL continueRunning;
@property (nonatomic) BOOL hasContinueRunning;
@property (nonatomic) BOOL requestsIntentExecution;
@property (nonatomic) BOOL hasRequestsIntentExecution;
@property (copy, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (readonly, nonatomic) BOOL hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (nonatomic) BOOL waitingForResume;
@property (nonatomic) BOOL hasWaitingForResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stepType;

- (id)stepAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addStep:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearSteps;
- (void)encodeWithCoder:(id)a0;

@end
