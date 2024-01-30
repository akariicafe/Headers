@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)currentVersion;
- (id)modelVersions;
- (id)initWithPath:(id)a0;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)currentVersionURL;
- (id)_modelForVersionHashes:(id)a0;
- (id)urlForModelVersionWithName:(id)a0;
- (id)optimizedVersionURL;
- (void)dealloc;

@end
