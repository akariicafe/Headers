@class NSString, DDSTrialAsset;
@protocol LMTrialProvider, DDSTrialProvider, TITrialManagerDataSource;

@interface TITrialManager : NSObject <DDSAssetCenterDelegate, TITrialManager>

@property (readonly) id<TITrialManagerDataSource> dataSource;
@property (readonly) id<LMTrialProvider> lmTrialProvider;
@property (readonly) id<DDSTrialProvider> ddsTrialProvider;
@property (copy) DDSTrialAsset *trialAsset;
@property BOOL didStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ updateCallback;

+ (id)sharedInstance;

- (void)didUpdateAssetsWithType:(id)a0;
- (void)dealloc;
- (void)trialDidStopForQuery:(id)a0;
- (void)trialDidReceiveAsset:(id)a0 forQuery:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)encodedCATrialParametersForLocale:(id)a0;
- (id)encodedLMTrialParametersForLocale:(id)a0;
- (void)handleReceivedTrialAsset:(id)a0;
- (id)initWithDatasource:(id)a0 lmTrialProvider:(id)a1 ddsTrialProvider:(id)a2;
- (id)inputTranscoderAssetsDirectoryURLForLocale:(id)a0;
- (id)urlForContentItemType:(id)a0 asset:(id)a1 locale:(id)a2;

@end
