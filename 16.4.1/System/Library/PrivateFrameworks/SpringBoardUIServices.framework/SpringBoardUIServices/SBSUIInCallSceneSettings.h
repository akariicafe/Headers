@class NSUUID;

@interface SBSUIInCallSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) long long inCallPresentationMode;
@property (readonly, nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowedAccessoryCutoutFrameInScreen;
@property (readonly, nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (readonly, nonatomic) BOOL systemControlsShouldPresentAsEmbedded;
@property (readonly, nonatomic) NSUUID *requestedPresentationConfigurationIdentifier;
@property (readonly, nonatomic, getter=isBeingShownAboveCoverSheet) BOOL beingShownAboveCoverSheet;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
