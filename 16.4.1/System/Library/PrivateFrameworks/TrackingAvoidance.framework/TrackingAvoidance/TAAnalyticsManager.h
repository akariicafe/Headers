@class NSString, TAAnalyticsManagerSettings;

@interface TAAnalyticsManager : NSObject <TATrackingAvoidanceServiceObserver, TAPersistenceManagerObserver> {
    TAAnalyticsManagerSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_convertPlaySoundWithDetection:(id)a0;
+ (id)_convertAISFetch:(id)a0;
+ (id)_convertBOMObservation:(id)a0;
+ (id)_convertDetection:(id)a0 service:(id)a1;
+ (id)_convertHomeDetection:(id)a0 service:(id)a1;
+ (id)_convertRecord:(id)a0 service:(id)a1;
+ (id)_convertRecordForAISFetch:(id)a0 service:(id)a1;
+ (id)_convertScanRequest:(id)a0 service:(id)a1;
+ (double)_getMotionDuration:(unsigned long long)a0 motionDistribution:(id)a1;
+ (long long)getHour:(id)a0;

- (void)trackingAvoidanceService:(id)a0 didUpdateSuspiciousDevices:(id)a1;
- (void)trackingAvoidanceService:(id)a0 didStageSuspiciousDevices:(id)a1;
- (void)trackingAvoidanceService:(id)a0 didFindSuspiciousDevices:(id)a1;
- (void)didReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (void)_submitEvent:(id)a0 content:(id)a1;
- (void)trackingAvoidanceService:(id)a0 didRequestAIS:(id)a1;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void)trackingAvoidanceService:(id)a0 requestingAdditionalInformation:(id)a1;
- (void).cxx_destruct;
- (void)_submitDefaultAISFetchCountEvent;
- (void)didWriteToURL:(id)a0 bytes:(unsigned long long)a1;

@end
