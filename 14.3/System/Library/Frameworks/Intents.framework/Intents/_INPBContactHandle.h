@class NSString;

@interface _INPBContactHandle : PBCodable <_INPBContactHandle, NSSecureCoding, NSCopying> {
    struct { unsigned char emergencyType : 1; unsigned char suggested : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int emergencyType;
@property (nonatomic) BOOL hasEmergencyType;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL suggested;
@property (nonatomic) BOOL hasSuggested;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)emergencyTypeAsString:(int)a0;
- (int)StringAsEmergencyType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
