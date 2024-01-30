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

+ (id)existingOverlayForDisplay:(id)a0;
+ (id)dismissActions;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)freeze;
- (void)dismiss;
- (id)succinctDescription;
- (void)dismissWithAnimation:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithDescriptor:(id)a0;
- (void)present;

@end
