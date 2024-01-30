@protocol BCCloudSecureManaging;

@interface BookDataStore.CloudSecureManagerProxy : NSObject <BDSCloudKitSupportSignOut, BCCloudSecureManaging> {
    void /* unknown type, empty encoding */ serviceProxy;
}

@property (class, nonatomic, retain) id<BCCloudSecureManaging> sharedManager;

@property (nonatomic, retain) void /* unknown type, empty encoding */ engagementManager;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userDataManager;

- (void)deleteCloudDataWithCompletion:(id /* block */)a0;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setEnableCloudSync:(BOOL)a0;

@end
