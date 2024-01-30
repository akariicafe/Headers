@class NSString;

@interface SBSUserNotificationImageAssetDefinition : SBSUserNotificationImageDefinition

@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, copy, nonatomic) NSString *catalogPath;
@property (readonly, copy, nonatomic) NSString *catalogImageKey;

+ (id)_definitionType;

- (id)_initWithDictionary:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)_initWithImagePath:(id)a0 imageCatalogPath:(id)a1 catalogImageKey:(id)a2;
- (id)initWithImageCatalogPath:(id)a0 catalogImageKey:(id)a1;
- (id)initWithImagePath:(id)a0;

@end
