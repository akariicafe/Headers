@class NSString, NSTimer, NSDictionary, NSMutableDictionary, NSArray, NSThread;

@interface AutoGuessController : AssistantCallbackController {
    BOOL _onShortTimer;
    struct ACPBrowserSession { } *_acpBrowserSession;
    struct AutoGuessContext { } *_guessContext;
    int _wifiScanStatus;
    int _bonjourBrowseStatus;
    BOOL _autoJoinState;
    BOOL _updatedTargetInfo;
    NSThread *_autoGuessThread;
}

@property (retain) NSTimer *_browseReadyTimer;
@property (retain) NSString *targetMACAddress;
@property (retain) NSDictionary *targetScanRecord;
@property (retain) NSDictionary *targetBrowseRecord;
@property (retain) NSMutableDictionary *_browsedBases;
@property (retain) NSArray *_wifiScanInfos;
@property id delegate;
@property int lastAutoGuessUISelector;
@property int currentAutoGuessUISelector;
@property (retain) NSString *lastParamString;
@property (retain) NSString *currentParamString;
@property (retain) NSDictionary *unconfiguredDeviceThatIsBeingSetup;
@property (retain) NSDictionary *lastInstrumentation;
@property (retain, nonatomic) NSDictionary *guessCompletionDict;

+ (id)restoreOfferFromCompletionDict:(id)a0;
+ (id)fullAutoGuessDictionaryFromCompletionDict:(id)a0;
+ (BOOL)isRestoreAnOptionForTheRecommendations:(id)a0;
+ (id)primaryRecommendationDictionaryFromCompletionDict:(id)a0;
+ (id)recommendationStringFromCompletionDict:(id)a0;
+ (id)recommendationToActionChoice:(id)a0;
+ (id)restoreRecommendationDictionaryFromCompletionDict:(id)a0;
+ (id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)a0;
+ (id)shortProductNameFromBaseStationDictionary:(id)a0;
+ (BOOL)shouldShowPasswordUIForRecommendation:(id)a0;
+ (id)sourceBaseStationFromRecommendation:(id)a0;
+ (id)sourceNetworkFromRecommendation:(id)a0;
+ (id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)a0;
+ (id)unconfiguredBaseStationFromGuessCompleteDict:(id)a0;
+ (id)unconfiguredBaseStationFromRecommendation:(id)a0;

- (void)dealloc;
- (id)init;
- (int)cancelAutoGuess;
- (void)stopWiFiScanner;
- (void)autoGuessEngineComplete;
- (int)bonjourBrowseStatus;
- (void)bonjourTXTRemoved:(id)a0;
- (void)bonjourTXTUpdated:(id)a0;
- (void)browseReadyTimerCallback:(id)a0;
- (void)cancelBonjourBrowser;
- (void)cancelWiFiScanner;
- (id)createCompletionDictFromAutoGuessResults:(id)a0;
- (BOOL)okToSwitchToShortBonjourTimeout:(id)a0;
- (void)runAutoGuessThread:(id)a0;
- (int)runAutoGuessWithWifiScanInfos:(id)a0;
- (void)setBonjourBrowseStatus:(int)a0;
- (void)setWiFiScanStatus:(int)a0;
- (int)startAutoGuessForUnconfiguredMACAddress:(id)a0 withWifiScanInfos:(id)a1;
- (void)startAutoGuessIfReady;
- (int)startBonjourBrowser;
- (int)startWiFiScanner;
- (void)stopBonjourBrowser;
- (id)targetInfo;
- (void)uiAssetsUpdated:(id)a0;
- (void)updateTargetInfo:(BOOL)a0;
- (int)wifiScanStatus;
- (void)wirelessScanDone:(id)a0;

@end
