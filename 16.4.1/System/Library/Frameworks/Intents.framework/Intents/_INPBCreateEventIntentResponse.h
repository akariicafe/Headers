@class NSArray, _INPBCalendarEvent, NSString;

@interface _INPBCreateEventIntentResponse : PBCodable <_INPBCreateEventIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationReason : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationReason;
@property (nonatomic) BOOL hasConfirmationReason;
@property (copy, nonatomic) NSArray *conflictingEventIdentifiers;
@property (readonly, nonatomic) unsigned long long conflictingEventIdentifiersCount;
@property (retain, nonatomic) _INPBCalendarEvent *createdEvent;
@property (readonly, nonatomic) BOOL hasCreatedEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsConfirmationReason:(id)a0;
- (void)addConflictingEventIdentifiers:(id)a0;
- (void)clearConflictingEventIdentifiers;
- (id)confirmationReasonAsString:(int)a0;
- (id)conflictingEventIdentifiersAtIndex:(unsigned long long)a0;

@end
