@class NSString, _INPBHomeAttributeValue;

@interface _INPBHomeAttribute : PBCodable <_INPBHomeAttribute, NSSecureCoding, NSCopying> {
    struct { unsigned char attributeType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int attributeType;
@property (nonatomic) BOOL hasAttributeType;
@property (retain, nonatomic) _INPBHomeAttributeValue *attributeValue;
@property (readonly, nonatomic) BOOL hasAttributeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)attributeTypeAsString:(int)a0;
- (int)StringAsAttributeType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
