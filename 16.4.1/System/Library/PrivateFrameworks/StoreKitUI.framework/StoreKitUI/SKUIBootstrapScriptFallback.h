@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSURL *cachedFileLocation;
@property (readonly, nonatomic) long long _unsynchronizedState;
@property (readonly, nonatomic) NSURL *cacheFolder;
@property (readonly, copy, nonatomic) NSString *cacheFilename;
@property double maximumAge;
@property (readonly) long long state;
@property (readonly) BOOL isBagAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheFilenameForStoreFrontIdentifier:(id)a0;
+ (id)defaultCacheFolder;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0;
- (void)_createCacheDirectoriesIfNeeded;
- (id)retrieveScript:(id *)a0;
- (void)_runWhenBackgroundWorkFinished:(id /* block */)a0;
- (void)_logError:(id)a0 forOperation:(id)a1;
- (BOOL)_setCacheAge:(id)a0 error:(id *)a1;
- (BOOL)canFallbackForError:(id)a0;
- (id)initWithCacheFolder:(id)a0 filename:(id)a1;
- (void)scriptEvaluated:(id)a0;

@end
