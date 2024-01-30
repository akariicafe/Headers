@class NUIdentifier;

@interface NUSchema : NUModel

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUIdentifier *identifier;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)reservedPropertyNames;
+ (id)deserializeIdentifierFromDictionary:(id)a0 error:(out id *)a1;
+ (BOOL)validateSchemaIdentifier:(id)a0 type:(long long)a1 error:(out id *)a2;
+ (BOOL)validateSchemaType:(id)a0 error:(out id *)a1;
+ (long long)schemaTypeFromString:(id)a0 error:(out id *)a1;
+ (BOOL)validateIdentifiable:(id)a0 error:(out id *)a1;
+ (BOOL)validateIdentifiable:(id)a0 type:(long long)a1 error:(out id *)a2;
+ (id)copyIdentifiableItem:(id)a0;
+ (id)copyItem:(id)a0 schemaIdentifier:(id)a1;
+ (long long)deserializeMediaTypeFromDictionary:(id)a0;
+ (BOOL)serializeMediaType:(long long)a0 intoDictionary:(id)a1 error:(out id *)a2;
+ (id)deserializeContentsFromDictionary:(id)a0 error:(out id *)a1;
+ (id)makeJSValueForIdentifiableItem:(id)a0 context:(id)a1 error:(out id *)a2;
+ (id)serializeIdentifiableItem:(id)a0 error:(out id *)a1;
+ (id)deserializeIdentifiableItem:(id)a0 error:(out id *)a1;
+ (id)serializeItem:(id)a0 schemaIdentifier:(id)a1 error:(out id *)a2;
+ (id)deserializeItem:(id)a0 schemaIdentifier:(id)a1 error:(out id *)a2;
+ (id)deserializeSchemaFromArray:(id)a0 error:(out id *)a1;

- (id)schemaDependencies;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)description;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0;
- (BOOL)validateIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (BOOL)serializeIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)deserializeIdentifierFromDictionary:(id)a0 error:(out id *)a1;

@end
