@class NSString, NSMapTable, WFSettingsController;

@interface WFSettingsViewProvider : NSObject <WFNetworkViewProvider>

@property (retain, nonatomic) NSMapTable *credentialsViewControllerMap;
@property (retain, nonatomic) WFSettingsController *settingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)certificateViewControllerWithContext:(id)a0;
- (id)credentialsViewControllerWithContext:(id)a0;
- (void)didDismissNetworkViewController:(id)a0 forContext:(id)a1;
- (id)networkDetailsViewControllerWithContext:(id)a0;
- (id)networkErrorViewControllerWithContext:(id)a0;
- (id)otherNetworkViewControllerWithContext:(id)a0 appearanceProxy:(id)a1;

@end
