@class NSString, TAAnalyticsManagerSettings;

@interface TAAnalyticsManager : NSObject <TATrackingAvoidanceServiceObserver, TAPersistenceManagerObserver> {
    TAAnalyticsManagerSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_convertDetection:(id)a0 service:(id)a1;
+ (id)_convertScanRequest:(id)a0 service:(id)a1;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)trackingAvoidanceService:(id)a0 didFindSuspiciousDevices:(id)a1;
- (void)trackingAvoidanceService:(id)a0 requestingAdditionalInformation:(id)a1;
- (void)trackingAvoidanceService:(id)a0 didUpdateSuspiciousDevices:(id)a1;
- (void)trackingAvoidanceService:(id)a0 didStageSuspiciousDevices:(id)a1;
- (void)_submitEvent:(id)a0 content:(id)a1;
- (void)didWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (void)didReadFromURL:(id)a0 bytes:(unsigned long long)a1;

@end
