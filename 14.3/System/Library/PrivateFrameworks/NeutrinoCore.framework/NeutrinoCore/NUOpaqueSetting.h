@interface NUOpaqueSetting : NUSetting

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (BOOL)validatePlistCompatibility:(id)a0 error:(out id *)a1;

@end
