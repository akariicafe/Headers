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

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_handleMediaDomainData:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithSystemStatusServer:(id)a0;
- (void)_notifyObserversOfActivityChange;
- (void)_updateStateForActiveAttributions:(id)a0;

@end
