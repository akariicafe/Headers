@class Logger, NSString, NSMutableDictionary, PSSimStatusCache, CoreTelephonyClient;

@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *_client;
    PSSimStatusCache *_simStatusCache;
    BOOL _cacheNeedsRefresh;
    Logger *_logger;
}

@property (retain) NSMutableDictionary *SACapabilityDict;
@property (retain) NSMutableDictionary *SAEnabledDict;
@property (retain) NSMutableDictionary *SAStatusDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)currentDataSimChanged:(id)a0;
- (void)clearCache;
- (void)carrierBundleChange:(id)a0;
- (id)initPrivate;
- (id)init;
- (void)nrDisableStatusChanged:(id)a0 status:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willEnterForeground;
- (id)getLogger;
- (id)initWithCoreTelephonyClient:(id)a0 simStatusCache:(id)a1;
- (void)fetchNRDisableStatus;
- (void)clearCacheAndRefresh;
- (void)fetch5GSupportAndEnabledStatusIfNeeded;
- (void)notifyClientsNeedRefresh;
- (BOOL)is5GSASupportedForContext:(id)a0;
- (BOOL)is5GSAEnabledForContext:(id)a0;
- (id)set5GSAEnabled:(BOOL)a0 forContext:(id)a1;
- (BOOL)is5GSASwitchUserInteractableForContext:(id)a0;
- (unsigned long long)getUserInteractableStatusReasonMaskForContext:(id)a0;

@end
