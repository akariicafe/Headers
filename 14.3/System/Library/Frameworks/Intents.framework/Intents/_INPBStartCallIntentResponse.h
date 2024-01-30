@class NSString, _INPBConnectedCall;

@interface _INPBStartCallIntentResponse : PBCodable <_INPBStartCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationReason : 1; unsigned char shouldDoEmergencyCountdown : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationReason;
@property (nonatomic) BOOL hasConfirmationReason;
@property (nonatomic) BOOL shouldDoEmergencyCountdown;
@property (nonatomic) BOOL hasShouldDoEmergencyCountdown;
@property (retain, nonatomic) _INPBConnectedCall *startedCall;
@property (readonly, nonatomic) BOOL hasStartedCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)confirmationReasonAsString:(int)a0;
- (int)StringAsConfirmationReason:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
