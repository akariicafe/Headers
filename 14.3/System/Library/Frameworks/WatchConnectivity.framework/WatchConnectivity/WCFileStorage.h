@class NSArray, NSString, WCContentIndex, NSObject;
@protocol OS_dispatch_queue;

@interface WCFileStorage : NSObject

@property (retain) NSObject<OS_dispatch_queue> *fileQueue;
@property (retain) NSArray *outstandingFileTransfers;
@property (retain) WCContentIndex *fileIndex;
@property (retain) WCContentIndex *fileResultsIndex;
@property (retain) WCContentIndex *userInfoIndex;
@property (retain) WCContentIndex *userInfoResultsIndex;
@property (copy, nonatomic) NSString *pairingID;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)homeDirectoryURL;
- (void)createWatchDirectoryIfNeeded:(id)a0;
- (void)deleteAppContextReceived:(BOOL)a0;
- (id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(id *)a0;
- (id)persistOutgoingUserInfoTransfer:(id)a0;
- (void)deleteOutstandingUserInfoTransfer:(id)a0;
- (id)loadOutstandingFileTransfers;
- (void)persistOutgoingFileTransfer:(id)a0;
- (void)deleteOutstandingFileTransfer:(id)a0;
- (void)persistAppContextData:(id)a0 received:(BOOL)a1;
- (id)loadAppContextReceived:(BOOL)a0;
- (id)loadAppContextDataFromInbox;
- (void)deleteAppContextDataFromInbox;
- (void)cleanupSessionFileFromInbox:(id)a0;
- (void)enumerateIncomingFilesWithBlock:(id /* block */)a0;
- (void)enumerateFileTransferResultsWithBlock:(id /* block */)a0;
- (void)deleteUserInfoTransferFromInbox:(id)a0;
- (void)enumerateIncomingUserInfosWithBlock:(id /* block */)a0;
- (void)enumerateUserInfoResultsWithBlock:(id /* block */)a0;
- (void)cleanUpWatchContentDirectoryWithCurrentAppInstallationID:(id)a0;
- (void)cleanUpOldPairingIDFoldersWithPairedDevicesPairingIDs:(id)a0;
- (void)resetIndexes;
- (id)outgoingFileTransferPath;
- (id)appendPathForFileTransfer:(id)a0 toPath:(id)a1;
- (BOOL)removeItemAtURL:(id)a0 numberOfRetries:(unsigned long long)a1 error:(id *)a2;
- (id)appContextFolderURL:(BOOL)a0;
- (void)deleteRelatedMetadataForSessionFileFromInbox:(id)a0;
- (void)deleteFileFolderForSessionFileFromInbox:(id)a0;
- (void)cleanUpOldPairingIDFolderInFolder:(id)a0 pairedDevicesPairingIDs:(id)a1;
- (id)receivedAppContextFolderURL;
- (id)localAppContextFolderURL;

@end
