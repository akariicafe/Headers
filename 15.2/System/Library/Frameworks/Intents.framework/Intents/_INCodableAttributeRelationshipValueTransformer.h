@class INCodableAttribute;

@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer

@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute;

- (id)transformedValue:(id)a0;
- (id)initWithCodableAttribute:(id)a0;
- (void).cxx_destruct;

@end
