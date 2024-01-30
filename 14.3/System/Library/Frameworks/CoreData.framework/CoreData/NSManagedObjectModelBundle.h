@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)initWithPath:(id)a0;
- (id)currentVersionURL;
- (id)optimizedVersionURL;
- (id)bundle;
- (id)_modelForVersionHashes:(id)a0;
- (void)dealloc;
- (id)modelVersions;
- (id)urlForModelVersionWithName:(id)a0;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)versionHashInfo;
- (id)currentVersion;
- (id)versionInfoDictionary;

@end
