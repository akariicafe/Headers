@class NSUUID, NSString, UISUIActivityExtensionItemDataRequest, NSURL;

@interface _UIShareServiceActivityProxy : NSObject {
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;
    Class _remoteClass;
    struct CGSize { double width; double height; } _thumbnailSize;
    NSURL *_representationCacheURL;
}

@property (copy, nonatomic) id /* block */ didFinishPerformingActivityHandler;
@property (copy, nonatomic) id /* block */ didFinishPreparingForExecution;

+ (void)forwardInvocation:(id)a0;
+ (id)activityProxyForServiceActivityDataRequest:(id)a0;

- (id)activityType;
- (void)_cleanup;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)activityViewController;
- (BOOL)allowsEmbedding;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (void)_loadItemProvidersFromActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (id)activityImage;
- (void)_willBePerformedOrPresented;
- (BOOL)_activitySupportsPromiseURLs;
- (BOOL)_wantsThumbnailItemData;
- (BOOL)_wantsAttachmentURLItemData;
- (BOOL)_wantsInitialSocialText;
- (void)forwardInvocation:(id)a0;
- (id)_embeddedActivityViewController;
- (BOOL)_needsResolvedActivityItems;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)activityTitle;
- (id)activityUUID;
- (BOOL)_isExecutedInProcess;
- (id)initWithUnderlyingActivityItemDataRequest:(id)a0;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
