@class NSString;

@interface DKDiagnosticContextMock : NSObject <DKResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableVolumeHUD:(BOOL)a0;
- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)displayAlertWithHeader:(id)a0 message:(id)a1 buttonStrings:(id)a2 completion:(id /* block */)a3;
- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)a0;
- (void)showUI:(id)a0 completion:(id /* block */)a1;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)uploadAssets:(id)a0 completion:(id /* block */)a1;

@end
