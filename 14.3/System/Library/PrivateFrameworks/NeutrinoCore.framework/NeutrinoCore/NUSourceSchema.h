@interface NUSourceSchema : NUSchema

+ (id)requiredAttributes;
+ (id)identifier;
+ (id)supportedAttributes;

- (id)copy:(id)a0;
- (id)init;
- (id)serialize:(id)a0 error:(out id *)a1;
- (long long)type;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)identifier;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (BOOL)validateSource:(id)a0 error:(out id *)a1;
- (id)serializeSource:(id)a0 error:(out id *)a1;
- (id)deserializeSource:(id)a0 error:(out id *)a1;
- (BOOL)serializeAssetIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (id)deserializeAssetIdentifierFromDictionary:(id)a0 error:(out id *)a1;

@end
