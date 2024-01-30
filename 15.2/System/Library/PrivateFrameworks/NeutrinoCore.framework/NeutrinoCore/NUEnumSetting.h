@class NSArray, NSString;

@interface NUEnumSetting : NUSetting

@property (readonly) NSArray *values;
@property (readonly) NSString *defaultValue;
@property (readonly) NSString *identityValue;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)description;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAttributes:(id)a0;
- (id)initWithValues:(id)a0 attributes:(id)a1;
- (BOOL)validateValues:(out id *)a0;

@end
