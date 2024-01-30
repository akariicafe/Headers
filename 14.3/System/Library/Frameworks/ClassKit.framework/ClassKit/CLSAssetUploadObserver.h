@class NSMetadataQuery, NSError, CLSAsset;

@interface CLSAssetUploadObserver : NSObject

@property (retain, nonatomic) CLSAsset *asset;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (retain, nonatomic) NSMetadataQuery *query;
@property (readonly) double uploadProgress;
@property (readonly) NSError *uploadError;
@property (copy, nonatomic) id /* block */ onUploadProgress;
@property (copy, nonatomic) id /* block */ onUploadComplete;

- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)startObserving;
- (id)initWithAsset:(id)a0;

@end
