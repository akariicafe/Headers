@class PHAsset, NSString, PHAssetExportRequest;

@interface PXPhotoKitAssetFilePromise : NSObject {
    PHAssetExportRequest *_exportRequest;
    long long _variant;
    long long _playbackStyle;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSString *fileType;

+ (id)filePromiseWithAsset:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)fileNameForType:(id)a0;
- (void)writeToURL:(id)a0 completionHandler:(id /* block */)a1;

@end
