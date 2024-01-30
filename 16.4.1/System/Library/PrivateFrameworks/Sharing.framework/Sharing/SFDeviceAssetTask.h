@class SFDeviceAssetRequestConfiguration, NSMutableArray, NSBundle, NSError, SFDeviceAssetQuery, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceAssetTask : NSObject

@property (readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery;
@property (readonly, nonatomic) SFDeviceAssetRequestConfiguration *configuration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) BOOL useProcessLocalCache;
@property (readonly, nonatomic) NSMutableArray *deviceQueryParameters;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSBundle *matchBundle;
@property (readonly, nonatomic) NSBundle *imperfectMatchBundle;
@property (readonly, nonatomic) NSBundle *fallbackBundle;
@property (readonly, nonatomic) NSBundle *cachedBundle;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) BOOL queryResultCalled;
@property (nonatomic) BOOL downloadCompletionCalled;

- (void)cancelTimeout;
- (void).cxx_destruct;
- (id)bundleAtURL:(id)a0 error:(id *)a1;
- (id)bundleURLFromAssetURL:(id)a0;
- (BOOL)completeIfPossible;
- (void)completeWithBundle:(id)a0 isFallback:(BOOL)a1 isCached:(BOOL)a2;
- (void)createQueryParameters;
- (id)initWithDeviceQuery:(id)a0 requestConfiguration:(id)a1 dispatchQueue:(id)a2 useProcessLocalCache:(BOOL)a3;
- (BOOL)updateTaskWithAssetBundleURL:(id)a0 error:(id)a1 isFallback:(BOOL)a2 isImperfectMatch:(BOOL)a3 isCached:(BOOL)a4;
- (BOOL)updateTaskWithAssetURL:(id)a0 error:(id)a1 isFallback:(BOOL)a2 isImperfectMatch:(BOOL)a3 isCached:(BOOL)a4;
- (BOOL)updateTaskWithBundle:(id)a0 error:(id)a1 isFallback:(BOOL)a2 isImperfectMatch:(BOOL)a3 isCached:(BOOL)a4;

@end
