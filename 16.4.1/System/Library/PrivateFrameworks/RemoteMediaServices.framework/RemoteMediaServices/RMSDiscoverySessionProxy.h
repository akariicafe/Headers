@class NSArray, NSString, RMSIDSClient;
@protocol RMSDiscoverySessionDelegate;

@interface RMSDiscoverySessionProxy : RMSSessionProxy <RMSDiscoverySession> {
    RMSIDSClient *_idsClient;
    long long _retryRate;
    BOOL _discovering;
    BOOL _wifiAvailable;
}

@property (weak, nonatomic) id<RMSDiscoverySessionDelegate> delegate;
@property (nonatomic) long long discoveryTypes;
@property (readonly, nonatomic) NSArray *availableServices;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable;
@property (retain, nonatomic) NSArray *pairedNetworkNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginDiscovery;
- (void)endDiscovery;
- (void)_availableServicesDidUpdateNotification:(id)a0;
- (void)_companionAvailabilityDidChange:(id)a0;
- (void)_handleSessionDidEndNotification:(id)a0;
- (void)_updateNetworkAvailability;
- (void)_wifiAvailabilityDidChange:(id)a0;
- (void)heartbeatDidFail;

@end
