@class NSError, NSString, TSPPackage, NSURL, SFUCryptoKey, NSObject, NSProgress, TSUZipFileWriter;
@protocol OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPPackageWriter : NSObject <TSPPackageDataWriter> {
    TSPPackage *_originalDocumentPackage;
    TSPPackage *_originalSupportPackage;
    id<TSPComponentWriteChannel> _componentWriteChannel;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    TSPPackage *_writtenPackage;
    BOOL _isOpened;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *documentTargetURL;
@property (readonly, nonatomic) NSURL *relativeURLForExternalData;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) BOOL canLinkData;
@property (readonly, nonatomic) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) TSUZipFileWriter *zipArchiveWriter;
@property (readonly, nonatomic) TSPPackage *originalPackage;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newPackageWriterWithPackageType:(long long)a0 URL:(id)a1 documentTargetURL:(id)a2 relativeURLForExternalData:(id)a3 packageIdentifier:(unsigned char)a4 documentProperties:(id)a5 fileFormatVersion:(unsigned long long)a6 updateType:(long long)a7 cloneMode:(BOOL)a8 encryptionKey:(id)a9 originalDocumentPackage:(id)a10 originalSuppportPackage:(id)a11 fileCoordinatorDelegate:(id)a12 progress:(id)a13 error:(id *)a14;

- (BOOL)closeAndReturnError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setError:(id)a0;
- (void)closeWithQueue:(id)a0 completion:(id /* block */)a1;
- (struct CGDataConsumer { } *)newCGDataConsumerAtRelativePath:(id)a0;
- (BOOL)writeData:(id)a0 toRelativePath:(id)a1 allowEncryption:(BOOL)a2 error:(id *)a3;
- (id)writtenPackageWithURL:(id)a0;
- (id)initWithURL:(id)a0 documentTargetURL:(id)a1 relativeURLForExternalData:(id)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 fileFormatVersion:(unsigned long long)a5 updateType:(long long)a6 cloneMode:(BOOL)a7 encryptionKey:(id)a8 originalDocumentPackage:(id)a9 originalSuppportPackage:(id)a10 fileCoordinatorDelegate:(id)a11 progress:(id)a12 error:(id *)a13;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 packageURL:(id)a2;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)a0 storeOutsideObjectArchive:(BOOL)a1;
- (id)filenameForData:(id)a0 preferredFilename:(id)a1;
- (id)linkOrCopyData:(id)a0 fromURL:(id)a1 fromTemporaryLocation:(BOOL)a2 decryptionInfo:(id)a3 preferredFilename:(id)a4 error:(id *)a5;
- (id)newPackageWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4;
- (id)newRawDataWriteChannelForRelativePath:(id)a0 originalLastModificationDate:(id)a1 originalSize:(unsigned long long)a2 originalCRC:(unsigned int)a3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a4;
- (BOOL)flushPendingWritesReturningError:(id *)a0;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(id /* block */)a0;
- (id)newComponentWriteChannelWithPackageLocator:(id)a0 compressionAlgorithm:(long long)a1 storeOutsideObjectArchive:(BOOL)a2;
- (void)copyComponent:(id)a0 locator:(id)a1 completion:(id /* block */)a2;
- (void)willWriteData:(id)a0;
- (BOOL)addData:(id)a0 infoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a1 saveOperationState:(id)a2 error:(id *)a3;
- (id)componentZipArchiveWriter;
- (void)closeCurrentChannel;
- (id)newCompressionComponentWriteChannelWithComponentWriteChannel:(id)a0 compressionAlgorithm:(long long)a1;
- (id)copyData:(id)a0 withReadChannel:(id)a1 decryptionInfo:(id)a2 size:(unsigned long long)a3 preferredFilename:(id)a4 error:(id *)a5;
- (id)dataForZipEntry:(id)a0 inDataToWrite:(id)a1;

@end
