@class NSString, NSURL, NSObject, EFLocked;
@protocol OS_dispatch_queue, EFScheduler;

@interface MUIBucketEphemeralSenderList : NSObject <EFContentProtectionObserver>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) EFLocked *addresses;
@property (readonly, nonatomic) id<EFScheduler> writeScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) BOOL isWaitingOnUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;
- (id)_loadFromURL:(id)a0;
- (void)_scheduleWrite;
- (id)_simpleAddressForString:(id)a0;
- (id)_stringAddressesFromPopulationBlock:(id /* block */)a0;
- (void)addAddressesToList:(id)a0;
- (void)addSenderToList:(id)a0;
- (id)initWithDirectory:(id)a0 populationBlock:(id /* block */)a1;
- (BOOL)isAddressInList:(id)a0;
- (void)removeAddressesFromList:(id)a0;
- (void)removeSenderFromList:(id)a0;

@end
