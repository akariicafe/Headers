@class NSManagedObjectContext, NSString, BCCloudKitController;

@interface BCCloudChangeTokenController : NSObject <BCCloudKitChangeTokenStore>

@property (weak, nonatomic) NSManagedObjectContext *moc;
@property (copy, nonatomic) NSString *zoneName;
@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (nonatomic) BOOL enableCloudSync;

- (void).cxx_destruct;
- (BOOL)cloudSyncEnabled;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)deleteCloudDataWithCompletion:(id /* block */)a0;
- (id)initWithMOC:(id)a0 zoneName:(id)a1 cloudKitController:(id)a2;
- (void)serverChangeTokenWithCompletion:(id /* block */)a0;
- (void)storeServerChangeToken:(id)a0 completion:(id /* block */)a1;

@end
