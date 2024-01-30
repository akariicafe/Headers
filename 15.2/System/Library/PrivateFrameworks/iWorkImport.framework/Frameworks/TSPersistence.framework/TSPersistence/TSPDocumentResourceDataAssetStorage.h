@class TSPDocumentResourceInfo, NSString, NSDataAsset, TSUOnce;
@protocol TSPDocumentResourceBundleProvider, TSUResourceRequest;

@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo> {
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
- (BOOL)isReadable;
- (unsigned long long)length;
- (BOOL)canDownload;
- (void).cxx_destruct;
- (id)init;
- (BOOL)needsDownload;
- (id)fallbackColor;
- (unsigned long long)encodedLength;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (id)documentResourceLocator;
- (void)didAddDownloadObserverWithData:(id)a0;
- (id)initWithResourceRequest:(id)a0 documentResourceInfo:(id)a1;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;

@end
