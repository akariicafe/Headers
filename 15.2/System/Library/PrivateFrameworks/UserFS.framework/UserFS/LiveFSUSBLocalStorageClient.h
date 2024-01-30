@interface LiveFSUSBLocalStorageClient : LiveFSClient

+ (id)newManager;

- (id)addDisk:(id)a0;
- (id)loadVolumes:(id)a0 ofType:(id)a1 withError:(id *)a2;
- (void)loadVolume:(id)a0 ofType:(id)a1 withReply:(id /* block */)a2;
- (id)removeAllVirtualDisks;

@end
