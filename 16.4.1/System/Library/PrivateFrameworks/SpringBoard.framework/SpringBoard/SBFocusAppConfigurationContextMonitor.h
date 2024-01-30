@class NSString, NSDictionary, DNDModeConfigurationService, NSObject;
@protocol OS_dispatch_queue;

@interface SBFocusAppConfigurationContextMonitor : NSObject <DNDModeConfigurationServiceListener> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_prefixes;
    DNDModeConfigurationService *_configurationService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)modeConfigurationService:(id)a0 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)a1;
- (void)_updatePrefixes:(id)a0;
- (id)targetContentIdentifierPrefixForBundleIdentifier:(id)a0;

@end
