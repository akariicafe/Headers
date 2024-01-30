@class NSString, TSUColor;
@protocol TSPCryptoInfo;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>

@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) BOOL isMissingData;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL needsDownload;
@property (nonatomic) BOOL gilligan_isRemote;
@property (readonly, nonatomic) id<TSPCryptoInfo> decryptionInfo;
@property (readonly, nonatomic) unsigned int CRC;
@property (readonly, nonatomic) TSUColor *fallbackColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (struct CGDataProvider { } *)newCGDataProvider;
- (struct CGImageSource { } *)newCGImageSource;
- (id)filenameForPreferredFilename:(id)a0;
- (BOOL)isInPackage:(id)a0;
- (BOOL)archiveInfoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a2 preferredFilename:(id)a3 error:(id *)a4;
- (id)AVAssetWithOptions:(id)a0 forData:(id)a1;
- (id)AVAssetWithOptions:(id)a0 usingResourceLoaderForData:(id)a1;

@end
