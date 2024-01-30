@class NSString, NSMutableDictionary, ATXMemoryPressureMonitor;

@interface ATXScoreInterpreterCache : NSObject <ATXMemoryPressureObserver> {
    NSMutableDictionary *_cachedInterpreters;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _memoryPressureAllowsCaching;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;
- (void)dealloc;
- (void)resetCache;
- (void)handleMemoryPressureOfType:(unsigned long long)a0;
- (id)init;
- (id)_assetNamesToSkipCaching;
- (void).cxx_destruct;

@end
