@class NUSchema;
@protocol NUIdentifiable;

@interface NUJSSchemaObject : NUJSModelObject

@property (readonly, nonatomic) NUSchema *schema;
@property (readonly, nonatomic) id<NUIdentifiable> item;

+ (id)JSValueWithSchema:(id)a0 identifiableItem:(id)a1 context:(id)a2;

- (BOOL)hasProperty:(id)a0;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithModel:(id)a0 representedObject:(id)a1 context:(id)a2;
- (id)initWithWithSchema:(id)a0 identifiableItem:(id)a1 context:(id)a2;

@end
