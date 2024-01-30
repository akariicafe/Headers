@class NSUUID, NSString;

@interface HMHomePersonManager : HMPersonManager <HMFLogging>

@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)personManagerUUIDFromHomeUUID:(id)a0;

- (void)configure;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithHome:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleDidUpdateSettingsMessage:(id)a0;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)updateSettings:(id)a0 completion:(id /* block */)a1;
- (id)logIdentifier;

@end
