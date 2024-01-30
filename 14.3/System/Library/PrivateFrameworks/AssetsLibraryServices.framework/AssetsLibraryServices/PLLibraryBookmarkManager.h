@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary *_activeURLsByPathKey;
}

+ (id)sharedBookmarkManager;
+ (id)_securityScopedURLWithURL:(id)a0 sandboxExtension:(id)a1;
+ (id)resolveSecurityScopedBookmark:(id)a0 isStale:(BOOL *)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_storeSecurityScopedURL:(id)a0 pathKey:(id)a1;
- (void)_saveToDefaults;
- (void)dealloc;
- (id)allKnownLibraryURLs;
- (void)_removeSSBForPathKey:(id)a0;
- (id)sandboxExtensionsByPathForClient:(id)a0 pathManager:(id)a1;
- (void)_removeActiveURLForPathKey:(id)a0;
- (void)_loadFromDefaults;
- (void)removeSSBForLibraryURL:(id)a0;
- (id)_activeURLForClientLibraryURL:(id)a0;
- (id)_newSandboxExtensionDataForClient:(struct { unsigned int x0[8]; })a0 path:(id)a1 writable:(BOOL)a2;
- (void)_importLithiumAccessRights;
- (void)removeInvalidSSBsExcept:(id)a0;
- (id)URLFromClientLibraryURL:(id)a0 sandboxExtension:(id)a1 error:(id *)a2;

@end
