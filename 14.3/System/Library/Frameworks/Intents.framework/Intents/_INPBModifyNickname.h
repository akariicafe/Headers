@class NSString, _INPBString;

@interface _INPBModifyNickname : PBCodable <_INPBModifyNickname, NSSecureCoding, NSCopying> {
    struct { unsigned char isRemoval : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isRemoval;
@property (nonatomic) BOOL hasIsRemoval;
@property (retain, nonatomic) _INPBString *targetNickname;
@property (readonly, nonatomic) BOOL hasTargetNickname;
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
- (void)encodeWithCoder:(id)a0;

@end
