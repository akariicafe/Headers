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
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValuesKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionParentNameKey;
- (id)initWithCodableAttribute:(id)a0;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionParentNameKey;
- (void)_establishRelationship;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (BOOL)compareValue:(id)a0;
- (id)dictionaryRepresentation;

@end
