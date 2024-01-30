@class NSDate, NSString, NSLock, NSMutableDictionary, NSDictionary, NSMutableString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDate *_lastRefreshDate;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (nonatomic) double lastRefreshTimeInternal;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long uuid;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (readonly, nonatomic) BOOL needsRefresh;
@property (nonatomic) double refreshInterval;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDictionary *currencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (BOOL)refresh;
- (id)init;
- (void).cxx_destruct;
- (BOOL)refreshIfNeeded;
- (BOOL)_needsRefresh;
- (BOOL)_queue_refresh:(double)a0;
- (id)_consumerSecret;
- (id)_consumerKey;
- (void)_loadPersistedCurrencyCache;
- (void)_queue_persistCurrencyCache;
- (BOOL)_queue_refresh;
- (id)createCredential;
- (BOOL)refreshWithTimeOut:(float)a0;
- (BOOL)updateCurrencyCacheWithData:(id)a0;

@end
