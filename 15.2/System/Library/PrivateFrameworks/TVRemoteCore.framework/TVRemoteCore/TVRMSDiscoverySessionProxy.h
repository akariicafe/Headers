@class NSArray, NSString, TVRMSIDSClient;
@protocol TVRMSDiscoverySessionDelegate;

@interface TVRMSDiscoverySessionProxy : TVRMSSessionProxy <TVRMSDiscoverySession> {
    TVRMSIDSClient *_idsClient;
    long long _retryRate;
    BOOL _discovering;
    BOOL _wifiAvailable;
}

@property (weak, nonatomic) id<TVRMSDiscoverySessionDelegate> delegate;
@property (nonatomic) long long discoveryTypes;
@property (readonly, nonatomic) NSArray *availableServices;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable;
@property (retain, nonatomic) NSArray *pairedNetworkNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginDiscovery;
- (void)endDiscovery;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_availableServicesDidUpdateNotification:(id)a0;
- (void)_handleSessionDidEndNotification:(id)a0;
- (void)_companionAvailabilityDidChange:(id)a0;
- (void)_wifiAvailabilityDidChange:(id)a0;
- (void)_updateNetworkAvailability;
- (void)heartbeatDidFail;

@end
