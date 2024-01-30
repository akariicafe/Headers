@class NSString;

@interface _INPBCondition : PBCodable <_INPBCondition, NSSecureCoding, NSCopying> {
    struct { unsigned char conditionalOperator : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int conditionalOperator;
@property (nonatomic) BOOL hasConditionalOperator;
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
- (int)StringAsConditionalOperator:(id)a0;
- (id)conditionalOperatorAsString:(int)a0;

@end
