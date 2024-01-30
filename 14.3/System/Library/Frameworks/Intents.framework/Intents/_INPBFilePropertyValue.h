@class _INPBDateTimeRange, _INPBContact, NSString, _INPBLong, _INPBString;

@interface _INPBFilePropertyValue : PBCodable <_INPBFilePropertyValue, NSSecureCoding, NSCopying> {
    struct { unsigned char fileType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (nonatomic) int fileType;
@property (nonatomic) BOOL hasFileType;
@property (retain, nonatomic) _INPBContact *person;
@property (readonly, nonatomic) BOOL hasPerson;
@property (retain, nonatomic) _INPBLong *quantity;
@property (readonly, nonatomic) BOOL hasQuantity;
@property (retain, nonatomic) _INPBString *value;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)fileTypeAsString:(int)a0;
- (int)StringAsFileType:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
