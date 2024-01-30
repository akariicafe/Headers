@class CKContainer, NSString;

@interface PFLInvernessService : NSObject <PFLNetworkProvider>

@property (retain, nonatomic) CKContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_teamIdentifier;
- (id)init;
- (id)_appBundleIdentifier;
- (void).cxx_destruct;
- (id)_taskConfigurationsFromPFLTasks:(id)a0;
- (void)fetchTasks:(id /* block */)a0;
- (void)fetchModelForTask:(id)a0 completion:(id /* block */)a1;
- (void)uploadDeviceResult:(id)a0 completion:(id /* block */)a1;

@end
