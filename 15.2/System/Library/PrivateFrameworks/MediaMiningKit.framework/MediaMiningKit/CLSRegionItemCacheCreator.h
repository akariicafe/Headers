@class NSArray, NSObject;
@protocol OS_os_log;

@interface CLSRegionItemCacheCreator : NSObject

@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long numberOfRetries;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) NSArray *queryPerformers;

+ (id)businessItemsForRegion:(id)a0;

- (void).cxx_destruct;
- (id)initWithQueryPerformers:(id)a0;
- (BOOL)createCacheForRegions:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;

@end
