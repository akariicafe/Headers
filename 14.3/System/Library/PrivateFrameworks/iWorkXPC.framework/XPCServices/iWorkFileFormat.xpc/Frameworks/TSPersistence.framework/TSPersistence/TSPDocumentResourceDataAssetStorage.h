@class TSPDocumentResourceInfo, NSString, NSDataAsset, TSUOnce;
@protocol TSPDocumentResourceBundleProvider, TSUResourceRequest;

@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDocumentResourceDataStorageInfo> {
    id<TSPDocumentResourceBundleProvider, TSUResourceRequest> _resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
    TSUOnce *_dataAssetOnceToken;
    NSDataAsset *_dataAsset;
}

@property (readonly, nonatomic) NSDataAsset *dataAsset;
@property (readonly, nonatomic) id<TSUResourceRequest> resourceRequest;
@property (readonly, nonatomic) TSPDocumentResourceInfo *documentResourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pixelSize;
- (unsigned long long)length;
- (BOOL)needsDownload;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isReadable;
- (unsigned long long)encodedLength;
- (id)fallbackColor;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (id)documentResourceLocator;
- (id)initWithResourceRequest:(id)a0 documentResourceInfo:(id)a1;
- (BOOL)archiveInfoMessage:(struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (void)addDownloadObserver:(id)a0 forData:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
