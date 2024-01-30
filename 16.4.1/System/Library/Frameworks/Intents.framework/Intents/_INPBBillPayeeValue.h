@class NSString, _INPBDataString, _INPBValueMetadata;

@interface _INPBBillPayeeValue : PBCodable <_INPBBillPayeeValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountNumber;
@property (readonly, nonatomic) BOOL hasAccountNumber;
@property (retain, nonatomic) _INPBDataString *nickname;
@property (readonly, nonatomic) BOOL hasNickname;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
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
