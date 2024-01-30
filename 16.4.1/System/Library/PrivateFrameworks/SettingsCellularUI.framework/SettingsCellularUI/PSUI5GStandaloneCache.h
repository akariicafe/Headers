@class NSString, NSMutableDictionary, PSSimStatusCache, CoreTelephonyClient;

@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *_client;
    PSSimStatusCache *_simStatusCache;
    BOOL _cacheNeedsRefresh;
}

@property (retain) NSMutableDictionary *SACapabilityDict;
@property (retain) NSMutableDictionary *SAEnabledDict;
@property (retain) NSMutableDictionary *NRStatusDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (void)currentDataSimChanged:(id)a0;
- (void)carrierBundleChange:(id)a0;
- (void)clearCache;
- (id)getLogger;
- (id)initPrivate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)nrDisableStatusChanged:(id)a0 status:(id)a1;
- (BOOL)are5GRATModesUserInteractableForContext:(id)a0;
- (void)clearCacheAndRefresh;
- (void)fetch5GSupportAndEnabledStatusIfNeeded;
- (void)fetchNRDisableStatus;
- (unsigned long long)getNSADisableStatusReasonMaskForContext:(id)a0;
- (unsigned long long)getSADisableStatusReasonMaskForContext:(id)a0;
- (id)initWithCoreTelephonyClient:(id)a0 simStatusCache:(id)a1;
- (BOOL)is5GSAEnabledForContext:(id)a0;
- (BOOL)is5GSASupportedForContext:(id)a0;
- (BOOL)is5GSASwitchUserInteractableForContext:(id)a0;
- (void)notifyClientsNeedRefresh;
- (id)set5GSAEnabled:(BOOL)a0 forContext:(id)a1;

@end
