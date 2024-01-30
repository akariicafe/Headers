@class UIWindow, UIWindowScene, UIScreen, AVSecondScreenConnection, CADisplay, AVObservationController;

@interface AVSecondScreen : NSObject

@property (readonly, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) UIWindow *window;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (retain, nonatomic) AVSecondScreenConnection *secondScreenConnection;
@property (readonly, nonatomic) long long state;
@property (retain, nonatomic) CADisplay *debugInfoDisplay;
@property (readonly, nonatomic, getter=isTVOutScreen) BOOL TVOutScreen;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sceneBounds;

- (id)initWithScene:(id)a0;
- (BOOL)isAvailable;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)_updatePreferredDisplayCriteria;
- (BOOL)_isWindowSceneAvailable;
- (void)connectWithSecondScreenConnection:(id)a0;

@end
