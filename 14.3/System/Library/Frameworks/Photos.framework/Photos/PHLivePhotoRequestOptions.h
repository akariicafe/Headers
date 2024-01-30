@class NSString;

@interface PHLivePhotoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions, NSCopying>

@property (readonly, copy, nonatomic) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL liveRenderVideoIfNeeded;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrentVersion;
- (id)renderResultHandlerQueue;
- (BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
- (BOOL)isSynchronous;
- (id)resultHandlerQueue;

@end
