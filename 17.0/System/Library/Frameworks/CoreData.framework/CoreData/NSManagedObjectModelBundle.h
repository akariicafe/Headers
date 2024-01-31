@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)currentVersion;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)currentVersionURL;
- (id)optimizedVersionURL;
- (id)modelVersions;
- (id)urlForModelVersionWithName:(id)a0;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)_modelForVersionHashes:(id)a0;
- (id)versionChecksums;

@end
