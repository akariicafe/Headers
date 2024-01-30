@class NSString;

@interface FMPrecisionFindingUI.FMPFView : UIView <ARSessionDelegate, ARSCNViewDelegate> {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ isZeus;
    void /* unknown type, empty encoding */ skSceneView;
    void /* unknown type, empty encoding */ ringView;
    void /* unknown type, empty encoding */ scnSceneView;
    void /* unknown type, empty encoding */ backdropRGBAColorSprings;
    void /* unknown type, empty encoding */ backdropRGBAColorSpringsIntensity;
    void /* unknown type, empty encoding */ backdropSigmaSpring;
    void /* unknown type, empty encoding */ backdropAlphaSpring;
    void /* unknown type, empty encoding */ skScene;
    void /* unknown type, empty encoding */ lastAskedRadiusFactor;
    void /* unknown type, empty encoding */ lastAskedSprungRadiusFactor;
    void /* unknown type, empty encoding */ useGreenBackdropBlurAndOpacity;
    void /* unknown type, empty encoding */ videoHelpers;
    void /* unknown type, empty encoding */ metalDevice;
    void /* unknown type, empty encoding */ metalTextureCache;
    void /* unknown type, empty encoding */ metalCommandQueue;
    void /* unknown type, empty encoding */ metalBGRABackdropMixerPipelineState;
    void /* unknown type, empty encoding */ metalBGRABackdropMixerParameters;
    void /* unknown type, empty encoding */ metalProcessingQueue;
    void /* unknown type, empty encoding */ metalBGRATextures;
    void /* unknown type, empty encoding */ metalBGRANextTextureIndex;
    void /* unknown type, empty encoding */ metalHasLoggedSetup;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ ecoModeObservation;
    void /* unknown type, empty encoding */ cameraGimbalNode;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lastThermalState;
    void /* unknown type, empty encoding */ sceneIsRunning;
    void /* unknown type, empty encoding */ isConvergingBackdropShown;
}

@property (nonatomic, readonly) NSString *description;

- (void)session:(id)a0 didFailWithError:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)renderer:(id)a0 updateAtTime:(double)a1;
- (void)renderer:(id)a0 willRenderScene:(id)a1 atTime:(double)a2;
- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)renderer:(id)a0 didAddNode:(id)a1 forAnchor:(id)a2;
- (void)renderer:(id)a0 didUpdateNode:(id)a1 forAnchor:(id)a2;
- (void)renderer:(id)a0 didRemoveNode:(id)a1 forAnchor:(id)a2;
- (void)thermalStateDidChangeWithNotification:(id)a0;

@end
