@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CFMorphunAssetsManager : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *_assetPaths;
}

+ (id)sharedMorphunAssetsManager;

- (id)init;
- (void).cxx_destruct;
- (id)_getNewMorphunPathForLanguage:(id)a0;
- (id)replaceLanguageCodeFormat:(id)a0;
- (id)morphunAssetsVersion:(id)a0 forLanguage:(id)a1;
- (id)morphunAssetsPathForLanguage:(id)a0;
- (void)downloadMorphunAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)registerPath:(id)a0 withLanguage:(id)a1;

@end
