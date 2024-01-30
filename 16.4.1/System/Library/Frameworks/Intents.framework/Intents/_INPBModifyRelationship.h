@class NSString, _INPBString;

@interface _INPBModifyRelationship : PBCodable <_INPBModifyRelationship, NSSecureCoding, NSCopying> {
    struct { unsigned char isRemoval : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isRemoval;
@property (nonatomic) BOOL hasIsRemoval;
@property (retain, nonatomic) _INPBString *targetRelationship;
@property (readonly, nonatomic) BOOL hasTargetRelationship;
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
