@class NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue, DOCTagRegistryDelegate;

@interface DOCTagRegistryICloudDataSource : NSObject

@property (retain, nonatomic) NSUbiquitousKeyValueStore *store;
@property (retain, nonatomic) NSObject *iCloudToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (weak, nonatomic) id<DOCTagRegistryDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)writeTagsToCloud;
- (void)isICloudAvailableWithCompletionBlock:(id /* block */)a0;
- (void)syncTagsWithCloud:(BOOL)a0 isICloudAvailable:(BOOL)a1;
- (void)iCloudTokenWithCompletionBlock:(id /* block */)a0;
- (void)kvsStoreDidChange:(id)a0;
- (void)ubiquityIdentityDidChange;
- (void)syncTagsWithCloud:(BOOL)a0;
- (id)iCloudTagsDictionary;
- (void)readTagsFromCloud:(BOOL)a0;
- (long long)iCloudTagVersion;
- (long long)iCloudTagSerialNumber;
- (id)iCloudTags;

@end
