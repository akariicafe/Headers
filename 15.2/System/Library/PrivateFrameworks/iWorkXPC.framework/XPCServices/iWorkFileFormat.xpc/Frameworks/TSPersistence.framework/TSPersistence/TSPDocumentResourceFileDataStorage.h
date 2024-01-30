@class NSString, TSPDocumentResourceInfo;
@protocol TSUResourceFileURLProvider, TSUResourceRequest;

@interface TSPDocumentResourceFileDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo> {
    id<TSUResourceFileURLProvider, TSUResourceRequest> _resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
}

@property (readonly, nonatomic) id<TSUResourceRequest> resourceRequest;
@property (readonly, nonatomic) TSPDocumentResourceInfo *documentResourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downloadProgress;
- (struct CGSize { double x0; double x1; })pixelSize;
- (BOOL)isReadable;
- (id)fileURL;
- (unsigned long long)length;
- (BOOL)canDownload;
- (void).cxx_destruct;
- (id)init;
- (BOOL)needsDownload;
- (id)fallbackColor;
- (unsigned long long)encodedLength;
- (id)documentResourceLocator;
- (void)performReadWithAccessor:(id /* block */)a0;
- (void)didAddDownloadObserverWithData:(id)a0;
- (id)initWithResourceRequest:(id)a0 documentResourceInfo:(id)a1;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;

@end
