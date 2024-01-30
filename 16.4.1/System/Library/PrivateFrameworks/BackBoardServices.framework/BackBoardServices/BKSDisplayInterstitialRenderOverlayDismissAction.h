@class NSString, BKSDisplayRenderOverlayDescriptor;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction> {
    BKSDisplayRenderOverlayDescriptor *_overlayDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

- (void)dismiss;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (void)dismissWithAnimation:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
