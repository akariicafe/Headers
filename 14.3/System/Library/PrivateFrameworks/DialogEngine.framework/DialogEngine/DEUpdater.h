@class NSString, DEManifest, NSURL, NSDate, DEWorkQueues, DEUpdaterState;

@interface DEUpdater : NSObject

@property (retain, nonatomic) NSString *distribution;
@property (retain, nonatomic) NSURL *publicationURL;
@property (retain, nonatomic) NSDate *publicationErrorTime;
@property (nonatomic) double publicationErrorTTL;
@property (retain, nonatomic) NSURL *downloadURLPrefix;
@property (retain, nonatomic) NSURL *builtinDir;
@property (retain, nonatomic) NSURL *updateDir;
@property (retain, nonatomic) NSURL *storageBase;
@property (retain, nonatomic) NSURL *overlayBase;
@property (retain, nonatomic) NSURL *tmpBase;
@property (retain, nonatomic) DEManifest *builtinManifest;
@property (retain, nonatomic) DEManifest *latestManifest;
@property (retain, nonatomic) DEWorkQueues *queues;
@property (retain, nonatomic) DEWorkQueues *syncQueues;
@property (retain, nonatomic) DEUpdaterState *state;
@property (nonatomic) BOOL manifestSyncing;
@property (nonatomic) BOOL disableManifestSync;
@property (nonatomic) BOOL foregroundManifestSync;
@property (nonatomic) BOOL logToCoreAnalytics;

+ (id)getVersionSeed:(unsigned long long)a0;
+ (BOOL)manifestExists:(id)a0;
+ (id)getURLParams:(id)a0 URLVersion:(unsigned long long)a1 manifest:(id)a2;
+ (id)getURLParams:(id)a0 URLVersion:(unsigned long long)a1;
+ (id)getPublicationPath:(id)a0 category:(id)a1;
+ (id)getDefaultCategory;
+ (id)getPublicationURL:(id)a0 prefixURL:(id)a1 category:(id)a2;
+ (id)summarize:(id)a0 filter:(id)a1;
+ (BOOL)putManifest:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 overrides:(id)a4 dirDownloadType:(unsigned long long)a5;
+ (BOOL)copyFrom:(id)a0 to:(id)a1;
+ (BOOL)package:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 dest:(id)a4 manifestDest:(id)a5 overrides:(id)a6 dirDownloadType:(unsigned long long)a7 keyId:(unsigned long long)a8 privateKey:(id)a9 updating:(id)a10 publicationURL:(id)a11 downloadURLPrefix:(id)a12;
+ (id)loadPublication:(id)a0 defaultTag:(id)a1 allowAllKeys:(BOOL)a2;
+ (id)getDispatchQueue;
+ (id)getPublicationURL:(id)a0;
+ (id)getDownloadURLPrefix:(id)a0;
+ (BOOL)hasDefaultURLs:(id)a0 publicationURL:(id)a1 downloadURLPrefix:(id)a2;
+ (id)getUpdateDirFor:(id)a0 base:(id)a1;
+ (id)getURLParams:(id)a0;
+ (void)remove:(id)a0 from:(id)a1;
+ (id)getManifestName;
+ (void)clearURLParamsCache;
+ (id)getPublicationPath:(id)a0 category:(id)a1 URLVersion:(unsigned long long)a2;
+ (BOOL)putManifest:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 overrides:(id)a4;
+ (BOOL)putDirectoryManifest:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 downloadType:(unsigned long long)a4;
+ (BOOL)package:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 dest:(id)a4 manifestDest:(id)a5 overrides:(id)a6 keyId:(unsigned long long)a7 privateKey:(id)a8 updating:(id)a9;
+ (BOOL)packageDirectory:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 dest:(id)a4 manifestDest:(id)a5 downloadType:(unsigned long long)a6 keyId:(unsigned long long)a7 privateKey:(id)a8 updating:(id)a9;
+ (BOOL)prepareDistribution:(id)a0 disabled:(BOOL)a1 in:(id)a2 tag:(id)a3 keyId:(unsigned long long)a4 privateKey:(id)a5;
+ (id)appendPublicationName:(id)a0;

- (BOOL)saveState;
- (BOOL)loadState;
- (id)init;
- (void).cxx_destruct;
- (BOOL)resetState;
- (BOOL)isDirectoryDistribution;
- (id)getVersionFor:(id)a0 encryptedVersion:(id *)a1;
- (BOOL)linkToOverlay:(id)a0 from:(id)a1 replace:(BOOL)a2 shouldSymlink:(BOOL)a3;
- (void)removeFromOverlay:(id)a0;
- (id)getStorageURLFor:(id)a0 version:(id)a1;
- (BOOL)linkToOverlay:(id)a0 from:(id)a1 replace:(BOOL)a2;
- (id)chooseOverlayBase;
- (BOOL)individualDistributionValid;
- (id)chooseURLFor:(id)a0 version:(id)a1 versionFound:(BOOL *)a2;
- (BOOL)prepareBuiltinManifest:(BOOL)a0 filter:(id)a1;
- (void)prepareLatestManifest;
- (id)initWithPublicationURL:(id)a0 downloadURLPrefix:(id)a1 builtinDir:(id)a2 updateDir:(id)a3 filter:(id)a4;
- (id)prepared:(id)a0 version:(id)a1;
- (id)getVersionFor:(id)a0;
- (void)checkOverlay:(id)a0 version:(id)a1;
- (id)getDownloadURLFor:(id)a0 encryptedVersion:(id)a1;
- (id)store:(id)a0 version:(id)a1 encryptedVersion:(id)a2 from:(id)a3 src:(id)a4;
- (void)unorderedPrepare:(id)a0 version:(id)a1 encryptedVersion:(id)a2 linkIfLatest:(BOOL)a3 publication:(id)a4 block:(id /* block */)a5;
- (void)runSyncBlock:(id /* block */)a0;
- (BOOL)syncNeeded;
- (void)unorderedSync:(id)a0 block:(id /* block */)a1;
- (void)sync:(id)a0 block:(id /* block */)a1;
- (BOOL)checkManifest:(id)a0 manifestURL:(id)a1;
- (void)prepare:(id)a0 version:(id)a1 encryptedVersion:(id)a2 linkIfLatest:(BOOL)a3 publication:(id)a4 block:(id /* block */)a5;
- (void)unorderedUpdate:(id)a0 block:(id /* block */)a1 syncBlock:(id /* block */)a2 syncInForeground:(id)a3;
- (id)getOutOfDateVersion:(id)a0;
- (id)findLocally:(id)a0 status:(id *)a1;
- (BOOL)applyUpdate;
- (void)findLocally:(id)a0 block:(id /* block */)a1;
- (void)update:(id)a0 block:(id /* block */)a1;
- (void)find:(id)a0 downloadType:(unsigned long long)a1 block:(id /* block */)a2;
- (id)find:(id)a0 downloadType:(unsigned long long)a1 status:(id *)a2;
- (BOOL)directoryDistributionValid;
- (BOOL)updateIsReady;
- (id)findDirectoryLocally:(BOOL)a0 status:(id *)a1;
- (void)findDirectoryLocally:(BOOL)a0 block:(id /* block */)a1;
- (void)findDirectory:(BOOL)a0 downloadType:(unsigned long long)a1 block:(id /* block */)a2;
- (id)findDirectory:(BOOL)a0 downloadType:(unsigned long long)a1 status:(id *)a2;
- (id)initWithPublicationURL:(id)a0 downloadURLPrefix:(id)a1 builtinDir:(id)a2;
- (id)initWithBuiltinDir:(id)a0 updateDir:(id)a1;
- (id)initWithBuiltinDir:(id)a0 filter:(id)a1;
- (id)initWithBuiltinDir:(id)a0;
- (id)initPlaceholder;
- (BOOL)matches:(id)a0 filter:(id)a1;
- (void)removeFromStorage:(id)a0;
- (BOOL)nameKnown:(id)a0 blockRequired:(BOOL *)a1;
- (void)find:(id)a0 block:(id /* block */)a1;
- (id)find:(id)a0 status:(id *)a1;
- (void)findDirectory:(BOOL)a0 block:(id /* block */)a1;
- (id)findDirectory:(BOOL)a0 status:(id *)a1;

@end
