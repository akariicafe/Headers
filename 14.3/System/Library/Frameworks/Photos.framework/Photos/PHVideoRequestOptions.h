@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions>

@property (readonly, copy, nonatomic) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed;
@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL allowMediumHighQuality;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long contentMode;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice;
@property (nonatomic) BOOL liveRenderVideoIfNeeded;
@property (nonatomic) BOOL liveRenderAndOnDemandRenderVideoConcurrently;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrentVersion;
- (id)renderResultHandlerQueue;
- (BOOL)isSynchronous;

@end
