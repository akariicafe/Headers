@class CSLPRFObservationHelper, NSString, NSArray, NSDictionary, NSMutableDictionary, NRDevice;

@interface CSLPRFAppConduitApplicationLibrary : NSObject <ACXDeviceConnectionDelegate, CSLPRFApplicationLibrary> {
    NRDevice *_pairedWatch;
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_cachedApplications;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;

- (id)applicationWithBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)applicationsUpdated:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)applicationsInstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)applicationsUninstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (void).cxx_destruct;
- (void)allApplicationsWithCompletion:(id /* block */)a0;
- (void)applicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithPairedWatch:(id)a0;

@end
