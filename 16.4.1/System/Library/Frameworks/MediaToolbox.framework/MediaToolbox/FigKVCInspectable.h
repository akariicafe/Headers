@interface FigKVCInspectable : NSObject

- (id)valueForUndefinedKey:(id)a0;
- (BOOL)validateValue:(inout id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(id *)a2;

@end
