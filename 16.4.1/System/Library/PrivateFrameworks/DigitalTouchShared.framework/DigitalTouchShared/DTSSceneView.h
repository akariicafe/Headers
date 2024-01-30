@class NSMutableDictionary, SKView;

@interface DTSSceneView : UIView {
    BOOL _shouldDelayLayout;
    BOOL _didDelayLayout;
    SKView *_sceneView;
}

@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (nonatomic) BOOL allowsTransparency;
@property (nonatomic) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly) NSMutableDictionary *options;

- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)_updateLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (void)presentScene:(id)a0;

@end
