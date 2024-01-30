@class NSArray, NSString, NSDictionary, STMAppPurgeableSizer, STMAppStaticSizer, STMAppDynamicSizer;
@protocol STMAppSizerDelegate;

@interface STMAppSizer : NSObject <STMSizeCacheDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _proxyLock;
    NSArray *_proxies;
    NSDictionary *_proxiesByDataPath;
    NSDictionary *_proxiesByBundlePath;
    NSDictionary *_appContainersByPath;
    NSDictionary *_dataContainersByPath;
}

@property (retain) STMAppStaticSizer *staticSizer;
@property (retain) STMAppDynamicSizer *dynamicSizer;
@property (retain) STMAppPurgeableSizer *purgeableSizer;
@property (retain, nonatomic) NSArray *appProxies;
@property (weak) id<STMAppSizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSizer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addProxy:(id)a0;
- (id)calcAppStaticSize:(id)a0;
- (id)calcAppDynamicSize:(id)a0;
- (id)calcAppPurgeableSize:(id)a0;
- (id)staticSizeForPath:(id)a0;
- (id)dynamicSizeForPath:(id)a0;
- (id)purgeableSizeForPath:(id)a0;
- (void)sizeCacheItemsUpdated:(id)a0;
- (void)sizeCacheSizesUpdated:(id)a0;
- (long long)totalSizeOfItems;
- (void)startSizer;
- (void)stopSizer;
- (void)notifySizesUpdated;
- (id)staticSizeForApp:(id)a0;
- (id)dynamicSizeForApp:(id)a0;
- (id)purgeableSizeForApp:(id)a0;

@end
