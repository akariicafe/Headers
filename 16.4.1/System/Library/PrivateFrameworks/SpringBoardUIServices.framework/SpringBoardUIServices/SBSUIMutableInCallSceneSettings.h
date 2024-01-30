@class NSUUID;

@interface SBSUIMutableInCallSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) long long inCallPresentationMode;
@property (nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowedAccessoryCutoutFrameInScreen;
@property (nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (nonatomic) BOOL systemControlsShouldPresentAsEmbedded;
@property (retain, nonatomic) NSUUID *requestedPresentationConfigurationIdentifier;
@property (nonatomic, getter=isBeingShownAboveCoverSheet) BOOL beingShownAboveCoverSheet;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setDeactivationReasons:(unsigned long long)a0;

@end
