@interface RLMDynamicObject : RLMObject

+ (BOOL)shouldIncludeInDefaultSchema;

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
