@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *unrecognizedProperties;

+ (id)metadataWithData:(id)a0;
+ (id)_whitelistedClassesForSecureCoding;
+ (BOOL)isRecognizedParameter:(id)a0 forProperty:(id)a1 inComponent:(id)a2;
+ (BOOL)isRecognizedProperty:(id)a0 inComponent:(id)a1;
+ (id)metadataWithICSComponent:(id)a0;
+ (BOOL)shouldSkipSavingUnrecognizedParametersForProperty:(id)a0 inComponent:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)applyToComponent:(id)a0;
- (id)dataRepresentationWithExistingMetaData:(id)a0;
- (id)initWithICSComponent:(id)a0;
- (id)propertyValueForComparison:(id)a0 propertyKey:(id)a1;

@end
