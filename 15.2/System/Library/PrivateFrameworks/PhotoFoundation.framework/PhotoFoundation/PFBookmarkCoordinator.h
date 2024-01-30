@class NSCountedSet;

@interface PFBookmarkCoordinator : NSObject {
    NSCountedSet *_managedPaths;
    NSCountedSet *_accessedPaths;
}

+ (id)sharedInstance;
+ (BOOL)urlHasSandboxExtension:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)startAccesingURLForBookmarkData:(id)a0 error:(id *)a1;
- (void)_incrementRefcountForURL:(id)a0 callStart:(BOOL)a1;
- (void)_decrementRefcountForURL:(id)a0;
- (void)startAccessingURL:(id)a0;
- (void)stopAccessingURL:(id)a0;
- (void)stopAccessingURLs:(id)a0;
- (void)addPowerBoxURL:(id)a0;
- (void)logRefCountForUrl:(id)a0 withPrefix:(id)a1 sender:(id)a2;

@end
