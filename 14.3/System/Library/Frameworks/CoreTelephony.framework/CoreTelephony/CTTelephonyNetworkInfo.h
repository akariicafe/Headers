@class NSString, NSMutableDictionary, CTServiceDescriptorContainer, NSDictionary, CoreTelephonyClient, CTCarrier;
@protocol CTTelephonyNetworkInfoDelegate;

@interface CTTelephonyNetworkInfo : NSObject <CoreTelephonyClientDataDelegateInternal, CoreTelephonyClientRegistrationDelegateInternal> {
    CoreTelephonyClient *_client;
    id /* block */ _subscriberCellularProviderDidUpdateNotifier;
    BOOL _initialized;
}

@property (retain) NSMutableDictionary *serviceSubscriberCellularProviders;
@property (retain) NSMutableDictionary *cachedCurrentRadioAccessTechnology;
@property (retain) NSMutableDictionary *cachedSignalStrength;
@property (retain) NSMutableDictionary *cachedCellIds;
@property (readonly) CTServiceDescriptorContainer *descriptors;
@property (readonly, copy) NSString *dataServiceIdentifier;
@property (weak) id<CTTelephonyNetworkInfoDelegate> delegate;
@property (readonly, retain) CTCarrier *subscriberCellularProvider;
@property (copy, nonatomic) id /* block */ serviceSubscriberCellularProvidersDidUpdateNotifier;
@property (copy, nonatomic) id /* block */ subscriberCellularProviderDidUpdateNotifier;
@property (readonly, retain, nonatomic) NSDictionary *serviceCurrentRadioAccessTechnology;
@property (readonly, retain, nonatomic) NSString *currentRadioAccessTechnology;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (void)carrierBundleChange:(id)a0;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void)queryCellIds;
- (id)radioAccessTechnology;
- (void)currentDataServiceDescriptorChanged:(id)a0;
- (void)updateSignalStrength:(id)a0 descriptor:(id)a1;
- (id)init;
- (void)updateCellId:(id)a0 forDescriptor:(id)a1;
- (void)queryRat;
- (void)cellChanged:(id)a0 cell:(id)a1;
- (void).cxx_destruct;
- (id)getFirstCellId;
- (void)dealloc;
- (void)updateRat:(id)a0 descriptor:(id)a1;
- (BOOL)getAllowsVOIP:(BOOL *)a0 forContext:(id)a1 withError:(id *)a2;
- (void)queryRatForDescriptor:(id)a0;
- (BOOL)getMobileNetworkCode:(id)a0 forContext:(id)a1 withError:(id *)a2;
- (void)postNotificationIfReady:(id)a0 object:(id)a1;
- (BOOL)getCarrierName:(id)a0 forContext:(id)a1 withError:(id *)a2;
- (void)setServiceSubscriberCellularProviderDidUpdateNotifier:(id /* block */)a0;
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)a0 forContext:(id)a1;
- (id /* block */)serviceSubscribersCellularProviderDidUpdateNotifier;
- (id)serviceSignalStrength;
- (id)cellId;
- (id)serviceCellId;
- (BOOL)getMobileCountryCode:(id)a0 andIsoCountryCode:(id)a1 forContext:(id)a2 withError:(id *)a3;
- (void)updateLegacyRat:(id)a0;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void)queryCTSignalStrength;
- (void)querySignalStrengthForDescriptor:(id)a0;
- (id)signalStrength;

@end
