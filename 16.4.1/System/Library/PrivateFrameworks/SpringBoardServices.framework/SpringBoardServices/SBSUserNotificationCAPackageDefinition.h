@class NSString;

@interface SBSUserNotificationCAPackageDefinition : SBSUserNotificationAssetDefinition

@property (readonly, copy, nonatomic) NSString *caPackagePath;

+ (id)_definitionType;
+ (id)definitionWithCAPackagePath:(id)a0;

- (id)_initWithDictionary:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)_initWithCAPackagePath:(id)a0;

@end
