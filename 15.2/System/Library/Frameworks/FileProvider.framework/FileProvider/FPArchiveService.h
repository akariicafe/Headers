@protocol FPArchiveServiceUnarchivingDelegate;

@interface FPArchiveService : NSObject <FPArchiveServiceStreamingInternal, FPArchiveServiceProtocol>

@property (weak, nonatomic) id<FPArchiveServiceUnarchivingDelegate> unarchivingDelegate;

- (void).cxx_destruct;
- (id)archiveItemsWithURLs:(id)a0 compressionFormat:(unsigned long long)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (id)unarchiveItemAtURL:(id)a0 passphrase:(id)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)receiveArchivedItemsDescriptors:(id)a0;
- (id)archiveItemsWithURLs:(id)a0 passphrase:(id)a1 addToKeychain:(BOOL)a2 compressionFormat:(unsigned long long)a3 destinationFolderURL:(id)a4 completionHandler:(id /* block */)a5;
- (void)itemDescriptorsForItemAtURL:(id)a0 passphrases:(id)a1 completionHandler:(id /* block */)a2;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 addToKeychain:(BOOL)a2 destinationFolderURL:(id)a3 acceptedFormats:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)itemDescriptorsForItemAtURL:(id)a0 passphrase:(id)a1 completionHandler:(id /* block */)a2;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 destinationFolderURL:(id)a2 acceptedFormats:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)archiveItemsWithURLs:(id)a0 compressionFormat:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)unarchiveItemAtURL:(id)a0 passphrase:(id)a1 completionHandler:(id /* block */)a2;

@end
