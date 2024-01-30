@class NSUserDefaults, NSFileManager, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface WKPhotoLibraryManager : NSObject

@property (class, readonly, nonatomic) WKPhotoLibraryManager *sharedManager;

@property (retain, nonatomic) NSFileManager *_fileManager;
@property (retain, nonatomic) NSUserDefaults *_userDefaults;
@property (retain, nonatomic) PHPhotoLibrary *_systemPhotoLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_workHandlerQueue;

+ (BOOL)_isRunningInPlaygroundSimulator;

- (id)initWithFileManager:(id)a0;
- (void).cxx_destruct;
- (id)_retrieveImageForAsset:(id)a0 version:(long long)a1;
- (void)_classicRetrieveSystemShellPreviewPayloadForAsset:(id)a0 completion:(id /* block */)a1;
- (id)_retrieveURLAssetForAsset:(id)a0;
- (void)retrieveSystemShellPreviewPayloadForAsset:(id)a0 completion:(id /* block */)a1;

@end
