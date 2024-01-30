@class NSString;
@protocol SBApplicationSceneBackgroundView;

@interface _SBInCallProxySceneBackgroundView : UIView <SBApplicationSceneBackgroundView>

@property (weak, nonatomic) id<SBApplicationSceneBackgroundView> proxyTarget;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 proxyTarget:(id)a1;

@end
