@class NSString, BKSDisplayRenderOverlayDescriptor;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction> {
    BKSDisplayRenderOverlayDescriptor *_overlayDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dismiss;
- (id)succinctDescription;
- (void)dismissWithAnimation:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithDescriptor:(id)a0;

@end
