@class NSDictionary, NSMapTable, NSHashTable;
@protocol NviAssetsProvider;

@interface NviSignalProvidersController : NSObject

@property (retain, nonatomic) id<NviAssetsProvider> assetsProvider;
@property (retain, nonatomic) NSDictionary *dataSrcMap;
@property (retain, nonatomic) NSMapTable *sigProvidersMap;
@property (retain, nonatomic) NSHashTable *currActiveSigProvTypes;
@property (retain, nonatomic) NSHashTable *currActiveDataSourceTypes;

+ (void)initialize;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)stop;
- (BOOL)_setupSignalProviders:(id)a0;
- (void)_startSignalProvidersWithContext:(id)a0;
- (void)_startDataSourcesWithContext:(id)a0;
- (void)_stopDataSources;
- (void)_stopCurrentlyRunningSignalProviders;
- (void)_iterateSignalMask:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (id)initWithAssetsProvider:(id)a0 dataSourceMap:(id)a1 signalProviderToDataSourceMap:(id)a2;
- (void)startWithNviContext:(id)a0;
- (void)registerSignalProviderDelegate:(id)a0 forSignalTypes:(unsigned long long)a1;
- (void)unregisterSignalProviderDelegate:(id)a0 forSignalType:(unsigned long long)a1;
- (void)registerSignalProviderDelegateForAllSignalTypes:(id)a0;
- (void)unregisterSignalProviderDelegateForAllSignalTypes:(id)a0;

@end
