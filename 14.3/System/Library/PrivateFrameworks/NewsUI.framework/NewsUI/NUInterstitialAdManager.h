@protocol NUPage, NUAdLayoutOptionsFactory, NUInterstitialAdManagerDelegate, FCNewsAppConfigurationManager, NUAdProvider;

@interface NUInterstitialAdManager : NSObject

@property (readonly, nonatomic) id<NUAdProvider> adProvider;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly, nonatomic) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;
@property (weak, nonatomic) id<NUInterstitialAdManagerDelegate> delegate;
@property (retain, nonatomic) id<NUPage> activePage;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTimer;
- (id)initWithAdProvider:(id)a0 appConfigurationManager:(id)a1 layoutOptionsFactory:(id)a2;
- (void)triggerTimerChangesForActivePage:(id)a0;
- (void)loadInterstitial;
- (void)restartTimer;

@end
