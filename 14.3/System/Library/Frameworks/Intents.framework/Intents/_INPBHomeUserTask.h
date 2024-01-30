@class NSString, _INPBHomeAttributeValue;

@interface _INPBHomeUserTask : PBCodable <_INPBHomeUserTask, NSSecureCoding, NSCopying> {
    struct { unsigned char attribute : 1; unsigned char taskType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int attribute;
@property (nonatomic) BOOL hasAttribute;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (retain, nonatomic) _INPBHomeAttributeValue *value;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)taskTypeAsString:(int)a0;
- (int)StringAsTaskType:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)attributeAsString:(int)a0;
- (int)StringAsAttribute:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
