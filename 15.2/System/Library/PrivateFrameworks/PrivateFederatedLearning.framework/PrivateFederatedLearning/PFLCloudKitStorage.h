@class CKContainer, NSString;

@interface PFLCloudKitStorage : NSObject <PFLNetworkProvider>

@property (retain, nonatomic) CKContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)fetchTasks:(id /* block */)a0;
- (void)fetchModelForTask:(id)a0 completion:(id /* block */)a1;
- (void)uploadDeviceResult:(id)a0 completion:(id /* block */)a1;

@end
