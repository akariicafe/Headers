@class NSString, NSObject;
@protocol OS_os_log;

@interface PXDeviceVolumeController : PXVolumeController <PXSettingsKeyObserver> {
    NSObject<OS_os_log> *_log;
    float _lastKnownVolume;
}

@property (class, readonly, nonatomic) PXDeviceVolumeController *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initAsSharedInstance;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_handleSystemVolumeChange:(id)a0;
- (id)initWithIsInSilentMode:(BOOL)a0;

@end
