@class CADisplay, NSString, BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor;

@interface BKSDisplayRenderOverlay : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction>

@property (readonly, nonatomic, getter=_descriptor) BKSDisplayRenderOverlayDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) CADisplay *display;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) BOOL lockBacklight;
@property (readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly, nonatomic, getter=isInterstitial) BOOL interstitial;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

+ (id)dismissActions;
+ (id)existingOverlayForDisplay:(id)a0;

- (void)present;
- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)freeze;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dismissWithAnimation:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dismiss;

@end
