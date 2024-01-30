@class NRPairedDeviceRegistry;

@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge {
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}

- (void)unregisterObserverForDevicePairingChanges:(id)a0;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (void)registerObserverForDevicePairingChanges:(id)a0 block:(id /* block */)a1;
- (id)pairedDeviceRegistry;
- (id)_notificationCenter;
- (void).cxx_destruct;
- (id)_pairingChangeNotifications;

@end
