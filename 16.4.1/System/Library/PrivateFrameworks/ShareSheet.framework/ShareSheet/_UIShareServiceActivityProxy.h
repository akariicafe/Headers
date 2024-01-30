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

- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)activityUUID;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)activityViewController;
- (id)activityImage;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;
- (BOOL)allowsEmbedding;
- (BOOL)_activitySupportsPromiseURLs;
- (BOOL)_allowsAutoCancelOnDismiss;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isExecutedInProcess;
- (void)_loadItemProvidersFromActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_managesOwnPresentation;
- (BOOL)_needsResolvedActivityItems;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_wantsAttachmentURLItemData;
- (BOOL)_wantsInitialSocialText;
- (BOOL)_wantsThumbnailItemData;
- (void)_willBePerformedOrPresented;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (id)initWithUnderlyingActivityItemDataRequest:(id)a0;

@end
