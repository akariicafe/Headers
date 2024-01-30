@class NSString, TSPFilePackage;
@protocol TSPCryptoInfo;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    NSString *_path;
    id<TSPCryptoInfo> _decryptionInfo;
    TSPFilePackage *_package;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _didCalculateCRC;
    _Atomic unsigned int _CRC;
    _Atomic BOOL _isMissingData;
    BOOL _gilligan_isRemote;
}

- (unsigned long long)length;
- (unsigned int)CRC;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isReadable;
- (unsigned char)packageIdentifier;
- (unsigned long long)encodedLength;
- (id)streamReadChannel;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (BOOL)isInPackage:(id)a0;
- (BOOL)isMissingData;
- (id)decryptionInfo;
- (BOOL)gilligan_isRemote;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (void)setGilligan_isRemote:(BOOL)a0;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a2 preferredFilename:(id)a3 error:(id *)a4;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;

@end
