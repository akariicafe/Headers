@class HKPairedFeatureAttributes, NSString, HKCountrySet, HKObserverSet, HKFeatureAttributes;
@protocol HDFeaturePropertiesWriting;

@interface HDPairedFeaturePropertiesSyncManager : NSObject <HDPairedFeatureAttributesProviding, HDObservableRegionAvailabilityDataSource> {
    NSString *_featureIdentifier;
    HKFeatureAttributes *_localFeatureAttributes;
    HKCountrySet *_localCountrySet;
    id /* block */ _activeRemoteReadSourceProvider;
    id /* block */ _remoteReadSourceForDeviceProvider;
    id<HDFeaturePropertiesWriting> _localWriteSource;
    int _nanoPreferencesSyncChangeNotificationToken;
    HKObserverSet *_observers;
}

@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)synchronizeLocalProperties;
- (id)pairedFeatureAttributesForPairedDevice:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 localFeatureAttributes:(id)a1 localCountrySet:(id)a2 activeRemoteReadSourceProvider:(id /* block */)a3 remoteReadSourceForDeviceProvider:(id /* block */)a4 localWriteSource:(id)a5;
- (id)remoteCountrySetForDevice:(id)a0;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (id)initWithFeatureIdentifier:(id)a0 localFeatureAttributes:(id)a1 localCountrySet:(id)a2;

@end
