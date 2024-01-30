@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary *_activeURLsByPathKey;
}

+ (id)sharedBookmarkManager;
+ (id)_securityScopedURLWithURL:(id)a0 sandboxExtension:(id)a1;
+ (id)resolveSecurityScopedBookmark:(id)a0 isStale:(BOOL *)a1 error:(id *)a2;

- (void)_importLithiumAccessRights;
- (void)_loadFromDefaults;
- (void)_removeSSBForPathKey:(id)a0;
- (void)_saveToDefaults;
- (void)_storeSecurityScopedURL:(id)a0 pathKey:(id)a1;
- (void)dealloc;
- (id)allKnownLibraryURLs;
- (id)_activeURLForClientLibraryURL:(id)a0;
- (void)_removeActiveURLForPathKey:(id)a0;
- (id)sandboxExtensionsByPathForClient:(id)a0 pathManager:(id)a1;
- (id)init;
- (id)URLFromClientLibraryURL:(id)a0 sandboxExtension:(id)a1 error:(id *)a2;
- (void)removeInvalidSSBsExcept:(id)a0;
- (void).cxx_destruct;
- (void)removeSSBForLibraryURL:(id)a0;
- (id)newSandboxExtensionDataForClient:(struct { unsigned int x0[8]; })a0 path:(id)a1 writable:(BOOL)a2;

@end
