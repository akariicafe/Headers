@class NSXPCConnection;

@interface HRTFEnrollmentAssetDownloadSession : NSObject {
    union AssetDownloadOptions { unsigned char shouldDownloadCatalog : 1; unsigned char shouldDownloadAsset : 1; unsigned char allowsCellularCatalogDownload : 1; unsigned char allowsCellularAssetDownload : 1; unsigned char discretionary : 1; unsigned int reserved : 27; unsigned int u32; } _options;
    id /* block */ _progressCallback;
    id /* block */ _completion;
    NSXPCConnection *_connection;
}

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)assetDownloadSessionProgressUpdate:(id)a0;
- (id)initWithOptions:(union AssetDownloadOptions { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 27; unsigned int x6; })a0 progressCallback:(id /* block */)a1 completion:(id /* block */)a2;

@end
