@class NSFileManager, NSLocale;

@interface CDMDefaultAssetsManager : NSObject {
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSLocale *locale;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)getAbsolutePathForServiceAssetFolder:(id)a0;
- (id)getAbsolutePathForAssetsRootFolder;
- (id)getAbsolutePathForCustomizedAssetsRootFolder:(id)a0;
- (id)getAbsolutePathForLocalizedAssetsRootFolder;
- (id)getAbsolutePathForCustomizedLocalizedAssetsRootFolder:(id)a0;
- (id)getAbsolutePathForServiceAssetFolder:(id)a0 customizedRoot:(id)a1;

@end
