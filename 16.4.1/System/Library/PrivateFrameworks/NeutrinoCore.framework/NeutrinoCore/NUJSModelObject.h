@class NUModel;

@interface NUJSModelObject : NUJSObject

@property (readonly, nonatomic) NUModel *model;

+ (id)JSValueWithModel:(id)a0 object:(id)a1 context:(id)a2;

- (BOOL)hasProperty:(id)a0;
- (void)enumerateProperties:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)toObject;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithModel:(id)a0 representedObject:(id)a1 context:(id)a2;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
