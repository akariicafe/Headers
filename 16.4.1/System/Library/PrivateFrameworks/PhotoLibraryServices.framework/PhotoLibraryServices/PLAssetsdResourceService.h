@class NSString, PLAssetsdCPLResourceDownloader, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol> {
    NSObject<OS_dispatch_queue> *_asyncImageDataQueue;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadCloudSharedAsset:(id)a0 wantedPlaceholderkind:(short)a1 shouldPrioritize:(BOOL)a2 shouldExtendTimer:(BOOL)a3 reply:(id /* block */)a4;
- (void)saveAssetWithDataAndPorts:(id)a0 imageSurface:(id)a1 previewImageSurface:(id)a2 reply:(id /* block */)a3;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1 resourceDownloader:(id)a2;
- (void)fileDescriptorForPersistentURL:(id)a0 withAdjustments:(BOOL)a1 reply:(id /* block */)a2;
- (void)asynchronousAdjustmentDataForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 reply:(id /* block */)a2;
- (void)projectExtensionDataForProjectUuid:(id)a0 reply:(id /* block */)a1;
- (BOOL)_consolidateResource:(id)a0 assetUUID:(id)a1 bundleScope:(unsigned short)a2 error:(id *)a3;
- (void)getSandboxExtensionsForAssetWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)translatePersistentURL:(id)a0 withAdjustments:(BOOL)a1 handler:(id /* block */)a2;
- (void)imageDataForAssetWithObjectURI:(id)a0 formatID:(unsigned short)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 reply:(id /* block */)a6;
- (id)consolidateAssets:(id)a0 reply:(id /* block */)a1;
- (void)estimatedFileLengthOfVideo:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3 reply:(id /* block */)a4;
- (void)addAssetWithURL:(id)a0 toAlbum:(id)a1 reply:(id /* block */)a2;
- (void)getSandboxExtensionForFileSystemBookmark:(id)a0 reply:(id /* block */)a1;
- (void)addAssetGroupWithName:(id)a0 reply:(id /* block */)a1;
- (id)_typeFromPathConstrainedToImageOrMovie:(id)a0;
- (void)updateInternalResourcePath:(id)a0 objectURI:(id)a1 sandboxExtension:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)filePathForPersistentURL:(id)a0 withAdjustments:(BOOL)a1 reply:(id /* block */)a2;

@end
