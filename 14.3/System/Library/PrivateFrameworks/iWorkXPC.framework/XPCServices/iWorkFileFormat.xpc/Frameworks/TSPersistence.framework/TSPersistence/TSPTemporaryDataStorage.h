@class TSPTemporaryDataStorageURL;
@protocol TSPCryptoInfo;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    id<TSPCryptoInfo> _decryptionInfo;
    BOOL _leakTemporaryFile;
    BOOL _gilligan_isRemote;
}

@property (readonly, nonatomic) BOOL isMissingOriginalData;
@property (readonly, nonatomic) BOOL isMissingData;

- (unsigned long long)length;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1;
- (id)decryptionInfo;
- (BOOL)gilligan_isRemote;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(BOOL)a2 isMissingData:(BOOL)a3 gilligan_isRemote:(BOOL)a4;
- (void)setGilligan_isRemote:(BOOL)a0;
- (void)leakTemporaryFile;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a2 preferredFilename:(id)a3 error:(id *)a4;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(BOOL)a2 isMissingData:(BOOL)a3;

@end
