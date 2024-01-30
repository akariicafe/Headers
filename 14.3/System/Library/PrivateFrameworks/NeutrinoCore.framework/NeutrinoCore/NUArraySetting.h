@class NUSetting;

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (id)copy:(id)a0;
- (id)initWithAttributes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)description;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)copyArray:(id)a0;
- (id)initWithContent:(id)a0 attributes:(id)a1;

@end
