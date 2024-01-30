@class NSString, _INPBIntentSlotValue;

@interface _INPBPayloadSuccess : PBCodable <_INPBPayloadSuccess, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *resolvedKeyPath;
@property (readonly, nonatomic) BOOL hasResolvedKeyPath;
@property (retain, nonatomic) _INPBIntentSlotValue *resolvedValue;
@property (readonly, nonatomic) BOOL hasResolvedValue;
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
