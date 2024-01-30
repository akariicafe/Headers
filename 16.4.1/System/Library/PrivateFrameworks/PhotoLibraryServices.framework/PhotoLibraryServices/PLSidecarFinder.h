@class NSCache;

@interface PLSidecarFinder : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSCache *cachedSidecarURLsByDirectory;

+ (id)_findPotentialSidecarURLsInDirectory:(id)a0 context:(id)a1;
+ (BOOL)_isValidExtensionForSidecar:(id)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)collectSidecarURLsForAssetFilename:(id)a0 inDirectory:(id)a1 context:(id)a2 removeWhenDone:(BOOL)a3;

@end
