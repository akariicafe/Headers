@protocol ICCloudKitSyncerDelegate;

@interface ICCloudKitSyncer : NSObject

@property (weak, nonatomic) id<ICCloudKitSyncerDelegate> delegate;

- (void).cxx_destruct;
- (void)saveUnsyncedObjects;
- (void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)a0 completionBlock:(id /* block */)a1;

@end
