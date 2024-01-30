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

- (BOOL)isReadable;
- (BOOL)canDownload;
- (unsigned long long)length;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (id)fallbackColor;
- (BOOL)needsDownload;
- (id)NSDataWithOptions:(unsigned long long)a0;
- (id)documentResourceLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)didAddDownloadObserverWithData:(id)a0;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (id)initWithResourceRequest:(id)a0 documentResourceInfo:(id)a1;
- (unsigned long long)materializedLength;

@end
