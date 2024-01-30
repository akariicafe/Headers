@class NSSet, STMediaStatusDomain, NSMutableSet, NSString, NSMutableArray, SBSensorActivityAttribution;

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider>

@property (copy, nonatomic) NSSet *activeSensorActivityAttributions;
@property (readonly, copy, nonatomic) NSMutableArray *recentSensorActivityAttributions;
@property (readonly, copy, nonatomic) NSMutableArray *recentAttributionExpirationTimers;
@property (readonly, nonatomic) STMediaStatusDomain *mediaDomain;
@property (readonly, copy, nonatomic) NSMutableSet *observers;
@property (readonly, copy, nonatomic) SBSensorActivityAttribution *mostRecentSensorActivityAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleMediaDomainData:(id)a0;
- (void)addObserver:(id)a0;
- (id)_sensorActivityAttributionsForActivityAttributions:(id)a0 sensor:(long long)a1;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOfActivityChange;
- (void)_updateStateForActiveAttributions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSystemStatusServer:(id)a0;

@end
