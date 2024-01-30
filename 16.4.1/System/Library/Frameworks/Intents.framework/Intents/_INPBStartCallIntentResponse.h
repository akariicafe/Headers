@class NSArray, NSString, _INPBConnectedCall;

@interface _INPBStartCallIntentResponse : PBCodable <_INPBStartCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationReason : 1; unsigned char shouldDoEmergencyCountdown : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationReason;
@property (nonatomic) BOOL hasConfirmationReason;
@property (copy, nonatomic) NSArray *restrictedContacts;
@property (readonly, nonatomic) unsigned long long restrictedContactsCount;
@property (nonatomic) BOOL shouldDoEmergencyCountdown;
@property (nonatomic) BOOL hasShouldDoEmergencyCountdown;
@property (retain, nonatomic) _INPBConnectedCall *startedCall;
@property (readonly, nonatomic) BOOL hasStartedCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)restrictedContactsType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsConfirmationReason:(id)a0;
- (void)addRestrictedContacts:(id)a0;
- (void)clearRestrictedContacts;
- (id)confirmationReasonAsString:(int)a0;
- (id)restrictedContactsAtIndex:(unsigned long long)a0;

@end
