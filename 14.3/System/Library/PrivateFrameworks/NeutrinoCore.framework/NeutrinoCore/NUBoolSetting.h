@class NSNumber;

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;

@end
