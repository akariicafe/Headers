@class LPVideoProperties, NSData, NSURL, NSString, NSItemProvider, AVURLAsset, NSObject, AVAsset;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding> {
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    NSItemProvider *_itemProvider;
    LPVideo *_videoLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    struct CGSize { double width; double height; } _intrinsicSize;
    BOOL _startedFetchingIntrinsicSize;
    AVURLAsset *_asset;
    id _mediaServicesResetNotificationHandler;
    LPVideoProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) AVAsset *_asset;
@property (readonly, retain, nonatomic) NSItemProvider *_itemProvider;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, retain, nonatomic) NSURL *streamingURL;
@property (readonly, retain, nonatomic) NSURL *youTubeURL;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, copy, nonatomic) LPVideoProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithYouTubeURL:(id)a0 properties:(id)a1;
- (id)initWithStreamingURL:(id)a0 properties:(id)a1;
- (id)initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (BOOL)_shouldEncodeData;
- (void)_mapDataFromFileURL;
- (BOOL)needsAsynchronousLoad;
- (void)loadAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemProvider:(id)a0 properties:(id)a1;
- (id)initWithYouTubeURL:(id)a0;
- (id)initWithStreamingURL:(id)a0 hasAudio:(BOOL)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)_intrinsicSizeWithCompletionHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSizeIfKnown;
- (void)_uninstallMediaServicesResetNotificationHandler;
- (id)_initWithVideo:(id)a0;
- (id)initWithData:(id)a0 MIMEType:(id)a1 hasAudio:(BOOL)a2;
- (void)_installMediaServicesResetNotificationHandler;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 hasAudio:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
