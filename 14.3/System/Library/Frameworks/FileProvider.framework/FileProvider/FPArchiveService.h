@protocol FPArchiveServiceUnarchivingDelegate;

@interface FPArchiveService : NSObject <FPArchiveServiceStreamingInternal, FPArchiveServiceProtocol>

@property (weak, nonatomic) id<FPArchiveServiceUnarchivingDelegate> unarchivingDelegate;

- (void)receiveArchivedItemsDescriptors:(id)a0;
- (void).cxx_destruct;
- (void)itemDescriptorsForItemAtURL:(id)a0 passphrases:(id)a1 completionHandler:(id /* block */)a2;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)itemDescriptorsForItemAtURL:(id)a0 passphrase:(id)a1 completionHandler:(id /* block */)a2;
- (id)archiveItemsWithURLs:(id)a0 compressionFormat:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)unarchiveItemAtURL:(id)a0 passphrase:(id)a1 completionHandler:(id /* block */)a2;
- (id)archiveItemsWithURLs:(id)a0 compressionFormat:(unsigned long long)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (id)unarchiveItemAtURL:(id)a0 passphrase:(id)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;

@end
