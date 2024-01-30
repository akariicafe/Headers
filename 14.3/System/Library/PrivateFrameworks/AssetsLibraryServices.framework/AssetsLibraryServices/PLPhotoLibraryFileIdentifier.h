@class NSString;

@interface PLPhotoLibraryFileIdentifier : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned char bundleScope;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int resourceVersion;
@property (readonly, nonatomic) unsigned int recipeId;
@property (readonly, nonatomic) BOOL isData;

+ (BOOL)isValidOriginalURL:(id)a0;
+ (id)fileIdentifierForValidOriginalURL:(id)a0;
+ (id)fileIdentifierForValidOriginalURL:(id)a0 originalsDirectoryName:(id)a1;
+ (id)uuidFromURL:(id)a0;

- (id)extension;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetUuid:(id)a0 uti:(id)a1 resourceVersion:(unsigned int)a2 resourceType:(unsigned int)a3;
- (id)initWithAssetUuid:(id)a0 uti:(id)a1 resourceVersion:(unsigned int)a2 recipeID:(unsigned int)a3;
- (id)initWithAssetUuid:(id)a0 bundleScope:(unsigned char)a1 uti:(id)a2 resourceVersion:(unsigned int)a3 resourceType:(unsigned int)a4 recipeID:(unsigned int)a5 originalFilename:(id)a6;

@end
