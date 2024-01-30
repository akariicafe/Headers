@class PKPassLibrary, NSMutableDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource>

@property (retain, nonatomic) PKPassLibrary *passLibrary;
@property (retain, nonatomic) NSMutableDictionary *networks;
@property (retain, nonatomic) NSMutableSet *relevantPassIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ relevancyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initializeWiFiPasses;
- (void)_handlePassLibraryChange:(id)a0;
- (id)_createWiFiWalletPassFromPass:(id)a0;
- (void)_passLibraryDidBecomeRelevantNotification:(id)a0;
- (void)_addPass:(id)a0;
- (void)_issueRelevancyCallbackWithRelevantNetworks:(id)a0 notRelevantNetworks:(id)a1;
- (void)_passDidBecomeRelevant:(id)a0;
- (void)_handleRelevantPassUpdate:(id)a0;
- (id)relevantNetworks;
- (id)candidateNetworks;
- (void)dealloc;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)_removeRelevantPasses;
- (id)init;
- (id)_networksWithIdentifier:(id)a0;
- (void)_passLibraryDidChange:(id)a0;
- (void).cxx_destruct;

@end
