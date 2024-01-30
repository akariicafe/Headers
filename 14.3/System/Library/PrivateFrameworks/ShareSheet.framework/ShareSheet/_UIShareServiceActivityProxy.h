@class NSUUID, NSString, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject {
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;
    Class _remoteClass;
    struct CGSize { double width; double height; } _thumbnailSize;
}

@property (copy, nonatomic) id /* block */ didFinishPerformingActivityHandler;
@property (copy, nonatomic) id /* block */ didFinishPreparingForExecution;

+ (void)forwardInvocation:(id)a0;
+ (id)activityProxyForServiceActivityDataRequest:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)activityType;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)activityDidFinish:(BOOL)a0;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (void)_cleanup;
- (void)_willBePerformedOrPresented;
- (id)activityUUID;
- (BOOL)_wantsThumbnailItemData;
- (BOOL)_wantsAttachmentURLItemData;
- (BOOL)_wantsInitialSocialText;
- (id)_embeddedActivityViewController;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_needsResolvedActivityItems;
- (void)prepareWithActivityItems:(id)a0;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (BOOL)_activitySupportsPromiseURLs;
- (BOOL)allowsEmbedding;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_isExecutedInProcess;
- (id)initWithUnderlyingActivityItemDataRequest:(id)a0;

@end
