@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MPNetworkPlayabilityMonitor : NSObject <ICEnvironmentMonitorObserver> {
    long long _effectiveNetworkTypeForCloudPlayback;
    long long _networkType;
    double _lastAverageBitrate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) double lastAverageBitrate;
@property (readonly, nonatomic) long long networkType;
@property (readonly, nonatomic) long long effectiveNetworkTypeForPlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNetworkPlayabilityMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)a0;
- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)a0;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;

@end
