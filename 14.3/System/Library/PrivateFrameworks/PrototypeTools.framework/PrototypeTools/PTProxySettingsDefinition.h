@class NSDictionary, PTSettingsClassStructure, PTModule;

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PTSettingsClassStructure *structure;
@property (retain, nonatomic) NSDictionary *childDefinitions;
@property (retain, nonatomic) NSDictionary *defaultValueArchive;
@property (retain, nonatomic) PTModule *module;

+ (id)definitionForSettingsClass:(Class)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)settingsClass;
- (void)encodeWithCoder:(id)a0;
- (BOOL)allSettingsClassesExistAndHaveCorrectVersion;

@end
