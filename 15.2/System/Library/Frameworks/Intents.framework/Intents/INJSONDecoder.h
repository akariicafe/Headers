@interface INJSONDecoder : NSObject

- (void)decodeObject:(id)a0 withCodableDescription:(id)a1 from:(id)a2;
- (id)decodeWithCodableAttribute:(id)a0 from:(id)a1;
- (id)decodeObjectOfClass:(Class)a0 from:(id)a1;
- (id)decodeObjectsOfClass:(Class)a0 from:(id)a1;
- (id)_decodeObjectOfClass:(Class)a0 withCodableDescription:(id)a1 from:(id)a2 outCodableDescription:(id *)a3;
- (id)_decodeWithCodableAttribute:(id)a0 from:(id)a1;

@end
