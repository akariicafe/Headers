@interface LiveFSUSBLocalStorageClient : LiveFSClient

+ (id)newManager;

- (id)addDisk:(id)a0;
- (id)removeAllVirtualDisks;

@end
