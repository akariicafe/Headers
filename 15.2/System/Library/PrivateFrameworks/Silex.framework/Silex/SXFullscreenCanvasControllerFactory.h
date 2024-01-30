@class NSString;
@protocol SXMediaSharingPolicyProvider, SXFullscreenCaptionViewFactory, SXPresentationAttributesProvider;

@interface SXFullscreenCanvasControllerFactory : NSObject <SXFullscreenCanvasControllerFactory>

@property (readonly, nonatomic) id<SXFullscreenCaptionViewFactory> captionViewFactory;
@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fullscreenCanvasControllerForShowable:(id)a0;
- (id)initWithCaptionViewFactory:(id)a0 presentationAttributesProvider:(id)a1 mediaSharingPolicyProvider:(id)a2;

@end
