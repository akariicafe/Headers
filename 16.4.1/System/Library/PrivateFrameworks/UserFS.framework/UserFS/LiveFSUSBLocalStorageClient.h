@interface LiveFSUSBLocalStorageClient : LiveFSClient

+ (id)newManager;

- (id)addDisk:(id)a0;
- (id)getConnectionForVolume:(id)a0 withError:(id *)a1;
- (id)getVolumeName:(id)a0 withError:(id *)a1;
- (void)loadVolume:(id)a0 ofType:(id)a1 withReply:(id /* block */)a2;
- (id)loadVolumes:(id)a0 ofType:(id)a1 withError:(id *)a2;
- (id)removeAllVirtualDisks;

@end
