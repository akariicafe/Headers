@interface NUSetting : NUModel

@property (readonly) id defaultValue;
@property (readonly, nonatomic) BOOL isRequired;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;
+ (id)deserializeAttributesFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeSettingsFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;

- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)description;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)serializeAttributesIntoDictionary:(id)a0 error:(out id *)a1;

@end
