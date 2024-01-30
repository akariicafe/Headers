@class _INPBStringValue, _INPBContactValue, NSString;

@interface _INPBDialingContactValue : PBCodable <_INPBDialingContactValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBContactValue *dialingContact;
@property (readonly, nonatomic) BOOL hasDialingContact;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneLabel;
@property (readonly, nonatomic) BOOL hasDialingPhoneLabel;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneNumber;
@property (readonly, nonatomic) BOOL hasDialingPhoneNumber;
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

@end
