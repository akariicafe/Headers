@class NSDictionary;

@interface NUModel : NSObject

@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)requiredAttributes;
+ (id)supportedAttributes;
+ (BOOL)validateIdentifier:(id)a0 error:(out id *)a1;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (BOOL)validateBool:(id)a0 error:(out id *)a1;
+ (BOOL)validateNumber:(id)a0 error:(out id *)a1;
+ (BOOL)validateString:(id)a0 error:(out id *)a1;
+ (BOOL)validateArray:(id)a0 error:(out id *)a1;
+ (BOOL)validateStringArray:(id)a0 error:(out id *)a1;
+ (BOOL)validateName:(id)a0 error:(out id *)a1;
+ (BOOL)validatePattern:(id)a0 error:(out id *)a1;
+ (BOOL)validatePropertyName:(id)a0 error:(out id *)a1;
+ (id)reservedPropertyNames;
+ (id)_deserializeObjectOfClass:(Class)a0 fromDictionary:(id)a1 key:(id)a2 error:(out id *)a3;
+ (id)deserializeStringFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeArrayFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeDictionaryFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeAttribute:(id)a0 value:(id)a1 error:(out id *)a2;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithAttributes:(id)a0;
- (void)enumerateProperties:(id /* block */)a0;
- (id)modelForProperty:(id)a0;
- (id)serializeAsDictionary:(out id *)a0;
- (BOOL)validateAttributes:(out id *)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (BOOL)serializeAttribute:(id)a0 value:(id)a1 intoDictionary:(id)a2 error:(out id *)a3;

@end
