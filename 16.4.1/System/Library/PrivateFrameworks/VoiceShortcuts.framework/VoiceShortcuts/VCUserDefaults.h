@interface VCUserDefaults : NSUserDefaults

+ (id)sharedUserDefaults;

- (id)codableObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)setCodableObject:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
