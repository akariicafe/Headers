@class NSString;

@interface _INPBDeleteEventIntentResponse : PBCodable <_INPBDeleteEventIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationReason : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationReason;
@property (nonatomic) BOOL hasConfirmationReason;
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
- (int)StringAsConfirmationReason:(id)a0;
- (id)confirmationReasonAsString:(int)a0;

@end
