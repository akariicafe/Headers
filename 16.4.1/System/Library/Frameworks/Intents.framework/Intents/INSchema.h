@class NSMutableDictionary, NSDictionary, NSString, NSArray;

@interface INSchema : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *_schemaDictionary;
@property (readonly, nonatomic) NSMutableDictionary *_parameterCombinationDictionary;
@property (readonly, nonatomic) NSMutableDictionary *_configurableParameterCombinationDictionary;
@property (readonly, nonatomic) NSDictionary *_typeForClassDictionary;
@property (readonly, nonatomic) NSDictionary *_typeForSemanticKeypathDictionary;
@property (readonly, nonatomic, getter=isSystem) BOOL system;
@property (readonly, nonatomic) NSMutableDictionary *_enums;
@property (readonly, nonatomic) NSMutableDictionary *_types;
@property (readonly, nonatomic) NSString *_mainBundleIdentifier;
@property (readonly, nonatomic) NSArray *_definitionFileURLs;

+ (BOOL)_defaultSchemaCanSupportIntent:(id)a0;
+ (id)_cache;
+ (id)systemSchema;
+ (void)_resetCache;
+ (id)_supportedTypesDictionary;
+ (id)_applicationBundleIdentifierFromBundleIdentifier:(id)a0;
+ (id)schemaWithBundleRecord:(id)a0 fallbackToSystemSchema:(BOOL)a1;
+ (id)defaultSchema;
+ (id)_defaultSchemaForBundle:(id)a0 contentOptions:(unsigned long long)a1;
+ (id)_supportedClasses;
+ (id)_schemaWithIntentDefinitionURLs:(id)a0 bundleIdentifier:(id)a1 mainBundleIdentifier:(id)a2 contentOptions:(unsigned long long)a3;
+ (id)_defaultSchemaForBundle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_parameterCombinationsForClass:(Class)a0;
- (id)intentWithName:(id)a0;
- (id)_classNamesForClass:(Class)a0;
- (id)_codableDescriptionWithDictionary:(id)a0 intentDefinitionNamespace:(id)a1 filename:(id)a2 bundleIdentifier:(id)a3 codableDescriptionClass:(Class)a4;
- (id)_codableDescriptionsForClass:(Class)a0;
- (id)_configurableParameterCombinationsForClassName:(id)a0;
- (id)_dictionaryRepresentationForIntentCodableDescription:(id)a0 intentResponseCodableDescription:(id)a1 appInfo:(id)a2 localizer:(id)a3;
- (id)_initWithContentsOfURLs:(id)a0;
- (id)_initWithContentsOfURLs:(id)a0 bundleIdentifier:(id)a1;
- (id)_initWithContentsOfURLs:(id)a0 bundleIdentifier:(id)a1 mainBundleIdentifier:(id)a2;
- (id)_initWithContentsOfURLs:(id)a0 bundleIdentifier:(id)a1 mainBundleIdentifier:(id)a2 contentOptions:(unsigned long long)a3;
- (id)_intentResponseWithDictionary:(id)a0 intentDefinitionNamespace:(id)a1 className:(id)a2 filename:(id)a3 bundleIdentifier:(id)a4 referencedCodableDescriptions:(id)a5;
- (id)_intentWithDictionary:(id)a0 intentDefinitionNamespace:(id)a1 filename:(id)a2 bundleIdentifier:(id)a3;
- (void)_loadIntentsFromArrayOfDictionaries:(id)a0 intentDefinitionNamespace:(id)a1 fromFile:(id)a2 bundleIdentifier:(id)a3 referencedCodableDescriptions:(id)a4 contentOptions:(unsigned long long)a5;
- (id)_objectDescriptionForClass:(Class)a0 identifier:(id)a1;
- (id)_objectDescriptionForTypeOfClass:(Class)a0;
- (id)_objectDescriptionWithSemanticKeypath:(id)a0;
- (id)_parameterCombinationsForClassName:(id)a0;
- (void)_setObjectDescription:(id)a0 forClass:(Class)a1 identifier:(id)a2;
- (id)_typesWithDictionary:(id)a0 filename:(id)a1 bundleIdentifier:(id)a2;
- (id)dictionaryRepresentationForIntent:(id)a0;
- (id)dictionaryRepresentationForIntent:(id)a0 localizer:(id)a1;
- (id)intentCodableDescriptionWithIntentClassName:(id)a0;
- (id)intentResponseCodableDescriptionWithIntentClassName:(id)a0;
- (id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)a0;

@end
