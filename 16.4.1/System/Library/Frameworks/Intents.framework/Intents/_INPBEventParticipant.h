@class NSString, _INPBContact;

@interface _INPBEventParticipant : PBCodable <_INPBEventParticipant, NSSecureCoding, NSCopying> {
    struct { unsigned char isEventOrganizer : 1; unsigned char isUser : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEventOrganizer;
@property (nonatomic) BOOL hasIsEventOrganizer;
@property (nonatomic) BOOL isUser;
@property (nonatomic) BOOL hasIsUser;
@property (retain, nonatomic) _INPBContact *person;
@property (readonly, nonatomic) BOOL hasPerson;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
