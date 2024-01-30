@class NSDictionary, NSMapTable, NSHashTable;
@protocol NviAssetsProvider;

@interface NviSignalProvidersController : NSObject

@property (retain, nonatomic) id<NviAssetsProvider> assetsProvider;
@property (retain, nonatomic) NSDictionary *dataSrcMap;
@property (retain, nonatomic) NSMapTable *sigProvidersMap;
@property (retain, nonatomic) NSHashTable *currActiveSigProvTypes;
@property (retain, nonatomic) NSHashTable *currActiveDataSourceTypes;

+ (void)initialize;

- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)reset;
- (void)_iterateSignalMask:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (BOOL)_setupSignalProviders:(id)a0;
- (void)_startDataSourcesWithContext:(id)a0;
- (void)_startSignalProvidersWithContext:(id)a0;
- (void)_stopCurrentlyRunningSignalProviders;
- (void)_stopDataSources;
- (id)initWithAssetsProvider:(id)a0 dataSourceMap:(id)a1 signalProviderToDataSourceMap:(id)a2;
- (void)registerSignalProviderDelegate:(id)a0 forSignalTypes:(unsigned long long)a1;
- (void)registerSignalProviderDelegateForAllSignalTypes:(id)a0;
- (void)startWithNviContext:(id)a0;
- (void)unregisterSignalProviderDelegate:(id)a0 forSignalType:(unsigned long long)a1;
- (void)unregisterSignalProviderDelegateForAllSignalTypes:(id)a0;

@end
