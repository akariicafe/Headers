@class NSObject;
@protocol OS_dispatch_queue;

@interface VUIMPMediaItemAssetControllerManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)mediaItemAssetControllerWithMediaItem:(id)a0 mediaEntityIdentifier:(id)a1;
- (id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)a0 mediaEntityIdentifier:(id)a1;
- (id)mediaItemDownloadControllerWithMediaItem:(id)a0;

@end
