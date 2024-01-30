@class NUSetting;

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)description;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithAttributes:(id)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)copyArray:(id)a0;
- (id)initWithContent:(id)a0 attributes:(id)a1;

@end
