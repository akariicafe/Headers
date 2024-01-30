@class TSPTemporaryDataStorageURL, SFUCryptoKey, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, TSPRemoteDataStorageDelegate, TSPCryptoInfo;

@interface TSPRemoteDataStorage : TSPFileDataStorage {
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPTemporaryDataStorageURL *_temporaryMaterializedURL;
    id<TSPCryptoInfo> _temporaryDecryptionInfo;
    NSObject<OS_dispatch_queue> *_downloadObserverInfosQueue;
    NSMutableArray *_downloadObserverInfos;
}

@property (weak, nonatomic) id<TSPRemoteDataStorageDelegate> delegate;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) BOOL isMaterialized;
@property (readonly, nonatomic) BOOL canDownload;
@property (readonly, nonatomic) long long downloadPriority;

+ (id)ioQueue;

- (unsigned long long)length;
- (BOOL)needsDownload;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithRemoteURL:(id)a0 encryptionKey:(id)a1 canDownload:(BOOL)a2 downloadPriority:(long long)a3;
- (id)decryptionInfo;
- (void)didReceiveRemoteDataAtURL:(id)a0 canMove:(BOOL)a1 decryptionInfo:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)addDownloadObserver:(id)a0 forData:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)notifyDownloadObserversWithStatus:(long long)a0 info:(id)a1;
- (void)didReceiveRemoteDataWithDecryptionInfo:(id)a0 noEncryptionHandler:(id /* block */)a1 createReadChannelForCryptoTranscodeBlock:(id /* block */)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (id)temporaryMaterializedURL;
- (void)notifyDownloadObserversWithStatusImpl:(long long)a0 info:(id)a1;
- (void)didReceiveRemoteData:(id)a0 decryptionInfo:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)didReceiveRemoteDataWithReadChannel:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a2 preferredFilename:(id)a3 error:(id *)a4;

@end
