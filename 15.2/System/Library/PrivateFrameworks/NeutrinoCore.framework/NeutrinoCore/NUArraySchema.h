@class NSDictionary, NSArray, NUPattern;

@interface NUArraySchema : NUSchema {
    NSDictionary *_identifierToAlias;
}

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NUPattern *pattern;
@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSArray *defaultArray;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (long long)deserializeContentTypeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializePatternFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (id)schemaDependencies;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (BOOL)validateArray:(id)a0 error:(out id *)a1;
- (BOOL)validateAttributes:(out id *)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (BOOL)validateContents:(out id *)a0;
- (id)initWithIdentifier:(id)a0 contentType:(long long)a1 contents:(id)a2 pattern:(id)a3 attributes:(id)a4;
- (BOOL)validateDefaultArray:(id)a0 error:(out id *)a1;
- (BOOL)validateArrayOrder:(id)a0 error:(out id *)a1;
- (BOOL)validateArrayContents:(id)a0 error:(out id *)a1;
- (id)copyArray:(id)a0;
- (id)makeJSValueFromArray:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)serializeArray:(id)a0 error:(out id *)a1;
- (id)deserializeArray:(id)a0 error:(out id *)a1;

@end
