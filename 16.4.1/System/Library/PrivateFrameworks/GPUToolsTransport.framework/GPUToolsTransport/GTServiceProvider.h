@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface GTServiceProvider : NSObject <GTServiceProvider, GTServiceProviderObserver> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_services;
    unsigned long long _nextServiceID;
    NSMutableDictionary *_waiting;
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
}

- (id)allServices;
- (unsigned long long)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deregisterService:(unsigned long long)a0;
- (void)_registerService:(id)a0 forProcess:(id)a1 forPort:(unsigned long long)a2;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)disconnectServicePorts:(id)a0;
- (void)notifyServiceListChanged:(id)a0;
- (void)registerDefaultServiceProvider:(id)a0 forProcess:(id)a1;
- (void)registerService:(id)a0 forProcess:(id)a1;
- (void)waitForService:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)waitForService:(id)a0 error:(id *)a1;

@end
