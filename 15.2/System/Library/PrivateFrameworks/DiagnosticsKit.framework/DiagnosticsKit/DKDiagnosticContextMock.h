@class NSString;

@interface DKDiagnosticContextMock : NSObject <DKResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (void)uploadAssets:(id)a0 completion:(id /* block */)a1;
- (void)showUI:(id)a0 completion:(id /* block */)a1;
- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)enableVolumeHUD:(BOOL)a0;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)a0;

@end
