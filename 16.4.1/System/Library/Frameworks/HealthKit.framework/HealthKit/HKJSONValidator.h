@class NSArray, NSMutableDictionary;
@protocol NSCopying;

@interface HKJSONValidator : NSObject {
    NSMutableDictionary *_subschemaCache;
}

@property (class, readonly, copy, nonatomic) NSArray *searchPaths;

@property (readonly, copy, nonatomic) id<NSCopying> schema;

+ (void)registerSearchPath:(id)a0;
+ (BOOL)validateJSONObject:(id)a0 withSchemaNamed:(id)a1 bundle:(id)a2 error:(out id *)a3;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_validateArray:(id)a0 schema:(id)a1 keyStack:(id)a2;
- (id)initWithSchema:(id)a0;
- (id)_loadSubschemaNamed:(id)a0;
- (id)_mismatchErrorFromKeyStack:(id)a0;
- (BOOL)_validateBoolean:(id)a0;
- (BOOL)_validateDictionary:(id)a0 schema:(id)a1 keyStack:(id)a2;
- (BOOL)_validateFingerprintSHA256:(id)a0;
- (BOOL)_validateJSONObject:(id)a0 keyStack:(id)a1;
- (BOOL)_validatePrimitive:(id)a0 schema:(id)a1 keyStack:(id)a2;
- (BOOL)_validateTimezone:(id)a0;
- (BOOL)_validateURL:(id)a0;
- (BOOL)_validateValue:(id)a0 schema:(id)a1 keyStack:(id)a2 root:(BOOL)a3;
- (BOOL)_validateValue:(id)a0 subschemaNamed:(id)a1 keyStack:(id)a2;
- (id)initWithSchema:(id)a0 subschemaCache:(id)a1;
- (id)initWithSchemaNamed:(id)a0 bundle:(id)a1;
- (BOOL)validateJSONObject:(id)a0 error:(out id *)a1;

@end
