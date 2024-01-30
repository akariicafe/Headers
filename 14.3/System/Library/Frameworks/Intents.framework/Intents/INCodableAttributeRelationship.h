@class NSArray, NSDictionary, NSString, INCodableAttribute, INCodableDescription;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary;
@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (retain, nonatomic) NSArray *values;
@property (readonly, nonatomic) Class valueClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionPredicateValuesKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (void).cxx_destruct;
- (id)initWithCodableAttribute:(id)a0;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (BOOL)compareValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionParentNameKey;
- (id)__INTypeCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionPredicateNameKey;
- (void)_establishRelationship;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (void)encodeWithCoder:(id)a0;

@end
