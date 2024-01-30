@class UIColor, FBScene, NSString;
@protocol SAAlertHosting;

@interface _SBUserNotificationAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding> {
    id<SAAlertHosting> _alertHost;
}

@property (retain, nonatomic) UIColor *keyColor;
@property (nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)alertHost;
- (void)setAlertHost:(id)a0;

@end
