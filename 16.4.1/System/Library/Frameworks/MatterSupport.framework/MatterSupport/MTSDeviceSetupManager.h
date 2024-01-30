@class NSString, MTSXPCServerProxy;

@interface MTSDeviceSetupManager : NSObject <HMFLogging>

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly, copy) NSString *localizedEcosystemName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLocalizedEcosystemName:(id)a0;
- (id)initWithLocalizedEcosystemName:(id)a0 serverProxy:(id)a1;
- (void)performDeviceSetupUsingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
