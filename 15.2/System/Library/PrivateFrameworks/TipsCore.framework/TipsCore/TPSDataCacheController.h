@class NSMutableArray, NSString, NSMutableDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSDataCacheController : NSObject {
    long long _dataType;
}

@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) unsigned long long maxDataCacheSize;
@property (nonatomic) BOOL dataCacheDirty;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataCacheSerialQueue;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *dataCacheMap;
@property (retain, nonatomic) NSString *cacheDirectory;
@property (retain, nonatomic) NSMutableArray *originFetchItems;
@property (nonatomic) BOOL backgroundOriginUpdate;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSMutableArray *dataCacheArray;

+ (id)sharedInstance;
+ (void)removeDataCacheAtPath:(id)a0;
+ (void)removeAllDataCache;

- (void)updateCache;
- (void)commonInit;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 directoryName:(id)a1 maxCacheSize:(unsigned long long)a2 URLSessionDataType:(long long)a3;
- (id)formattedDataWithData:(id)a0;
- (BOOL)isURLValid:(id)a0;
- (id)newDataCache;
- (id)formattedDataWithFileURL:(id)a0;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)dataCacheForIdentifier:(id)a0;
- (id)saveFileURL:(id)a0 identifier:(id)a1 fileSize:(unsigned long long)a2 lastModified:(id)a3 dataCache:(id)a4;
- (id)cacheFileURLForDataCache:(id)a0;
- (id)formattedDataForPath:(id)a0 identifier:(id)a1 attributionIdentifier:(id)a2 priority:(float)a3 completionHandler:(id /* block */)a4;
- (id)cacheFileURLForIdentifier:(id)a0;
- (void)cancelAllOriginSessionItems;
- (void)updateCacheDelay;
- (void)reloadDataCache;
- (void)removeAllDataCache;
- (void)createCacheDirectory;
- (void)removeDataCache:(id)a0 updateCache:(BOOL)a1;
- (void)removeDataCache:(id)a0;
- (void)addDataCache:(id)a0;
- (id)formattedDataForRequest:(id)a0 identifier:(id)a1 attributionIdentifier:(id)a2 requestType:(id)a3 priority:(float)a4 completionHandler:(id /* block */)a5;
- (void)syncCacheImmediately;
- (BOOL)cacheValidForIdentifier:(id)a0;
- (void)removeCacheForIdentifier:(id)a0;

@end
