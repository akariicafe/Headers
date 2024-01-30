@class NSString, NSMapTable, WFSettingsController;

@interface WFSettingsViewProvider : NSObject <WFNetworkViewProvider>

@property (retain, nonatomic) NSMapTable *credentialsViewControllerMap;
@property (retain, nonatomic) WFSettingsController *settingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)credentialsViewControllerWithContext:(id)a0;
- (id)certificateViewControllerWithContext:(id)a0;
- (id)networkErrorViewControllerWithContext:(id)a0;
- (id)networkDetailsViewControllerWithContext:(id)a0;
- (void)didDismissNetworkViewController:(id)a0 forContext:(id)a1;
- (id)otherNetworkViewControllerWithContext:(id)a0 appearanceProxy:(id)a1;

@end
