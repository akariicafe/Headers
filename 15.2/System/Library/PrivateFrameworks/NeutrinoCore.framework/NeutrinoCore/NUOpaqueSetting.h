@interface NUOpaqueSetting : NUSetting

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (BOOL)validatePlistCompatibility:(id)a0 error:(out id *)a1;

@end
