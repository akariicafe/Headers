@interface RLMDynamicObject : RLMObject

+ (BOOL)shouldIncludeInDefaultSchema;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForUndefinedKey:(id)a0;

@end
