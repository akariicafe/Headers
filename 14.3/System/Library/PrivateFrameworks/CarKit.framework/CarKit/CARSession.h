@class CARSessionConfiguration, NSString, CARAppearanceManager, NSData, CARInputDeviceManager, NSNumber, CARObserverHashTable;

@interface CARSession : NSObject <CARAppearanceManagerDelegate> {
    struct OpaqueFigEndpoint { } *_endpoint;
}

@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy, nonatomic) NSData *MFiCertificateSerialNumber;
@property (retain, nonatomic) CARInputDeviceManager *inputDeviceManager;
@property (retain, nonatomic) NSNumber *systemNightMode;
@property (retain, nonatomic) NSNumber *fallbackNightMode;
@property (nonatomic) int nightFallbackNotifyToken;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (readonly, nonatomic) BOOL clientIsCarPlayShell;
@property (nonatomic) BOOL requiresCarCapabilitiesValues;
@property (retain, nonatomic) CARAppearanceManager *appearanceManager;
@property (readonly, nonatomic) CARSessionConfiguration *configuration;
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property (readonly, copy, nonatomic) NSNumber *nightMode;
@property (readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringForNightModeNumber:(id)a0;
+ (long long)_siriRequestEventForEndpointAction:(id)a0;

- (struct OpaqueFigEndpoint { } *)endpoint;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)setInputMode:(unsigned long long)a0 forInputDevice:(id)a1;
- (void)suggestUI:(id)a0;
- (void)requestCarUI;
- (BOOL)recognizingSpeech;
- (void)requestCarUIForURL:(id)a0;
- (id)borrowScreenForClient:(id)a0 reason:(id)a1;
- (void)takeScreenForClient:(id)a0 reason:(id)a1;
- (void)takeScreenForConnection;
- (void)sendCommand:(id)a0 withParameters:(id)a1;
- (void)_updateConfiguration;
- (long long)_carUserInterfaceStyleForAppearanceMode:(unsigned long long)a0;
- (void)appearanceManager:(id)a0 didUpdateUIAppearanceStyle:(long long)a1 forScreenUUIDs:(id)a2;
- (void)appearanceManager:(id)a0 didUpdateMapAppearanceStyle:(long long)a1 forScreenUUIDs:(id)a2;
- (BOOL)carOwnsScreen;
- (void)_performExtendedEndpointAction:(id /* block */)a0;
- (void)_newObserverAdded:(id)a0;
- (void)_fetchAuthenticationStatus;
- (void)_fetchFallbackIsNightWithToken:(int)a0;
- (id)_endpointValueForKey:(struct __CFString { } *)a0;
- (void)_handleViewAreaChangeWithPayload:(id)a0;
- (void)_updateScreenInfo:(id)a0 currentViewAreaToViewArea:(id)a1 duration:(double)a2 transitionControlType:(unsigned long long)a3;
- (id)_capabilitiesIdentifier;
- (void)_handleNightModeChange;
- (void)_setEndpointValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (id)lastNavigatingBundleIdentifier;
- (id)_fig_safe_description;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0 clientIsCarPlayShell:(BOOL)a1;
- (long long)userInterfaceStyleForScreenUUID:(id)a0;
- (long long)mapInterfaceStyleForScreenUUID:(id)a0;
- (void)_handleAppearanceModeUpdateWithParameters:(id)a0;
- (id)APEndPointInfo;
- (void)_handleOpenURL:(id)a0;
- (void)_handleMapAppearanceModeUpdateWithParameters:(id)a0;
- (void)_handleSiriRequestEvent:(long long)a0 withPayload:(id)a1;
- (void)requestAdjacentViewAreaForScreenID:(id)a0;
- (void)_handleShowUIWithParameters:(id)a0;
- (void)_handleStopUIWithParameters:(id)a0;
- (void)setSiriForwardingEnabled:(BOOL)a0;
- (BOOL)carOwnsMainAudio;
- (unsigned long long)navigationOwner;
- (void)requestTurnByTurnOwnership;
- (void)releaseTurnByTurnOwnership;
- (void)unborrowScreenForToken:(id)a0;
- (void)setCornerMaskImageData:(id)a0 forScreenInfo:(id)a1;

@end
