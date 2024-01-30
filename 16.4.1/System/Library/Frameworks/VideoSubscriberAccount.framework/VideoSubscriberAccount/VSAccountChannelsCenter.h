@class NSString, NSUndoManager, NSURL, VSAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface VSAccountChannelsCenter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) VSAccountStore *accountStore;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSURL *directoryURL;
@property (copy, nonatomic) id /* block */ identityProviderFetchOperationBlock;
@property (retain, nonatomic) NSUndoManager *undoManager;

+ (id)sharedCenter;
+ (id)_accountChannelsWithProviderID:(id)a0;
+ (id)_defaultDirectoryURL;
+ (id)_defaultFileName;
+ (void)_startOperationAndWaitForCompletion:(id)a0;

- (id)initWithAccountStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchAccountChannelsWithCompletionHandler:(id /* block */)a0;
- (void)_enqueueRemoveSavedAccountChannelsAndWait;
- (void)_enqueueSaveAccountChannelsAndWait:(id)a0;
- (id)_removeSavedAccountChannels;
- (void)_removeSavedAccountChannelsWithCompletionHandler:(id /* block */)a0;
- (id)_saveAccountChannels:(id)a0;
- (void)_saveAccountChannels:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_savedAccountChannels;
- (id)_savedAccountChannelsForIdentityProviderID:(id)a0 storeIdentityProvider:(id)a1;
- (void)_snapshotPreviousChannels;
- (id)_storeIdentityProviderForAccount:(id)a0;

@end
