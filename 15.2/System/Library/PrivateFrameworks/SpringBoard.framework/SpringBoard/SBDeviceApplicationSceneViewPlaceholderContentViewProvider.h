@class NSString, UIUserInterfaceStyleArbiter;
@protocol SBScenePlaceholderContentViewProviderDelegate;

@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider> {
    UIUserInterfaceStyleArbiter *_userInterfaceStyleArbiter;
}

@property (weak, nonatomic) id<SBScenePlaceholderContentViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithApplication:(id)a0;
- (struct CGSize { double x0; double x1; })_naturalSizeForOrientation:(long long)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (id)sceneView:(id)a0 requestsPlaceholderContentViewWithContext:(id)a1;
- (void)_snapshotsDidChange:(id)a0;
- (id)_initWithApplication:(id)a0 userInterfaceStyleArbiter:(id)a1;
- (BOOL)_checkApplicationRestorationState:(id)a0 useSnapshot:(BOOL *)a1;
- (void).cxx_destruct;
- (id)_contentViewFromSceneHandle:(id)a0 displayConfiguration:(id)a1 orientation:(long long)a2 snapshot:(id)a3 size:(struct CGSize { double x0; double x1; })a4 statusBarDescriptor:(id)a5 hasOrientationMismatchForClassicApp:(BOOL)a6;
- (unsigned long long)_contentTypeToSearchFromSceneHandle:(id)a0 withContext:(id)a1;
- (id)_loadLiveXIBViewForApplication:(id)a0;
- (void)dealloc;

@end
