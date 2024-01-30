@class NSUserDefaults, NSString, NRPairedDeviceRegistry, NSObject;
@protocol HDRemoteFeatureAvailabilityProvidingDelegate, OS_os_log;

@interface HDWatchRemoteFeatureAvailabilityProvider : NSObject <HDRemoteFeatureAvailabilityProviding> {
    NSString *_remoteDisableCondition;
    NSString *_seedExpirationCondition;
    NSObject<OS_os_log> *_loggingCategory;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
}

@property (weak, nonatomic) id<HDRemoteFeatureAvailabilityProvidingDelegate> delegate;

- (void)setPairedDeviceRegistry:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 loggingCategory:(id)a1;
- (void)setRemoteFeatureAvailabilityUserDefaults:(id)a0;
- (id)rescindedStatusForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (id)description;
- (void).cxx_destruct;
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)a0 error:(id *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithRemoteDisableCondition:(id)a0 seedExpirationCondition:(id)a1 loggingCategory:(id)a2;

@end
