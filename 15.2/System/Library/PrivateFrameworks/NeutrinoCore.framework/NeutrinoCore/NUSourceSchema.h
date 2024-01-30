@interface NUSourceSchema : NUSchema

+ (id)identifier;
+ (id)requiredAttributes;
+ (id)supportedAttributes;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)identifier;
- (id)serializeSource:(id)a0 error:(out id *)a1;
- (BOOL)serializeAssetIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (id)copy:(id)a0;
- (id)schemaDependencies;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserializeSource:(id)a0 error:(out id *)a1;
- (id)init;
- (id)deserializeAssetIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (long long)type;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)validateSource:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;

@end
