@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)initWithPath:(id)a0;
- (id)_modelForVersionHashes:(id)a0;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)urlForModelVersionWithName:(id)a0;
- (void)dealloc;
- (id)optimizedVersionURL;
- (id)currentVersionURL;
- (id)modelVersions;
- (id)currentVersion;

@end
