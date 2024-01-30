@interface HomeAutomationInternal.HomeStore : NSObject <HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, HMMediaSystemDelegate> {
    void /* unknown type, empty encoding */ cachedResults;
    void /* unknown type, empty encoding */ cacheRequiresInvalidation;
    void /* unknown type, empty encoding */ loadSucceeded;
    void /* unknown type, empty encoding */ refreshCompleted;
    void /* unknown type, empty encoding */ loadWaitSemaphores;
    void /* unknown type, empty encoding */ refreshWaitSemaphores;
    void /* unknown type, empty encoding */ initializationSignpostID;
    void /* unknown type, empty encoding */ initializationSELFPerformanceLogger;
    void /* unknown type, empty encoding */ homeManagerInitTimeout;
    void /* unknown type, empty encoding */ _homeManager;
}

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)home:(id)a0 didUpdateRoom:(id)a1 forAccessory:(id)a2;
- (void)accessoryDidUpdateName:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didAddMediaSystem:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1 toZone:(id)a2;
- (void)home:(id)a0 didRemoveZone:(id)a1;
- (id)init;
- (void)mediaSystem:(id)a0 didUpdateName:(id)a1;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void)home:(id)a0 didAddZone:(id)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didRemoveMediaSystem:(id)a1;
- (void)accessory:(id)a0 didAddProfile:(id)a1;
- (void)accessory:(id)a0 didRemoveProfile:(id)a1;
- (void)accessory:(id)a0 didUpdateAssociatedServiceTypeForService:(id)a1;
- (void)accessory:(id)a0 didUpdateNameForService:(id)a1;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)home:(id)a0 didAddService:(id)a1 toServiceGroup:(id)a2;
- (void)home:(id)a0 didAddServiceGroup:(id)a1;
- (void)home:(id)a0 didRemoveRoom:(id)a1 fromZone:(id)a2;
- (void)home:(id)a0 didRemoveService:(id)a1 fromServiceGroup:(id)a2;
- (void)home:(id)a0 didRemoveServiceGroup:(id)a1;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;
- (void)home:(id)a0 didUpdateNameForServiceGroup:(id)a1;
- (void)home:(id)a0 didUpdateNameForZone:(id)a1;
- (void)homeDidUpdateName:(id)a0;
- (void)homeManagerDidUpdateAssistantIdentifiers:(id)a0;
- (void)mediaSystem:(id)a0 didUpdateConfiguredName:(id)a1;

@end
