@class NSDictionary, PTSettingsClassStructure, PTModule;

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PTSettingsClassStructure *structure;
@property (retain, nonatomic) NSDictionary *childDefinitions;
@property (retain, nonatomic) NSDictionary *defaultValueArchive;
@property (retain, nonatomic) PTModule *module;

+ (id)definitionForSettingsClass:(Class)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (Class)settingsClass;
- (BOOL)allSettingsClassesExistAndHaveCorrectVersion;

@end
