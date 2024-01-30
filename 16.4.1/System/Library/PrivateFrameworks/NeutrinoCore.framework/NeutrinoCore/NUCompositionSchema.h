@class NSDictionary, NSSet;

@interface NUCompositionSchema : NUSchema {
    NSSet *_requiredContents;
}

@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSSet *requiredContents;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (BOOL)isValid:(out id *)a0;
- (BOOL)deserializeContents:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (id)modelForProperty:(id)a0;
- (long long)type;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserializeComposition:(id)a0 error:(out id *)a1;
- (BOOL)validatePropertyArray:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (BOOL)validateContents:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 contents:(id)a1 attributes:(id)a2;
- (id)copy:(id)a0;
- (BOOL)validateContents:(out id *)a0;
- (id)serializeComposition:(id)a0 error:(out id *)a1;
- (BOOL)serializeContents:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)copyComposition:(id)a0;
- (BOOL)validateComposition:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)deserialize:(id)a0 error:(out id *)a1;

@end
