@class NSString, _INPBString;

@interface _INPBCreateFileIntentResponse : PBCodable <_INPBCreateFileIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; unsigned char overwrite : 1; unsigned char success : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) BOOL overwrite;
@property (nonatomic) BOOL hasOverwrite;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
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
- (int)StringAsEntityType:(id)a0;
- (id)entityTypeAsString:(int)a0;

@end
