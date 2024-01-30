@class NUModel;

@interface NUJSModelObject : NUJSObject

@property (readonly, nonatomic) NUModel *model;

+ (id)JSValueWithModel:(id)a0 object:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (id)toObject;
- (BOOL)hasProperty:(id)a0;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)initWithModel:(id)a0 representedObject:(id)a1 context:(id)a2;
- (void)enumerateProperties:(id /* block */)a0;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;

@end
