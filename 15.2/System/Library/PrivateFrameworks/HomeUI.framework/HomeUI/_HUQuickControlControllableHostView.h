@class MTMaterialView, NSString, HUQuickControlViewProfile;
@protocol HUQuickControlViewInteractionDelegate;

@interface _HUQuickControlControllableHostView : UIView <HUQuickControlInteractiveView>

@property (retain, nonatomic) id value;
@property (copy, nonatomic) HUQuickControlViewProfile *profile;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (readonly, nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
