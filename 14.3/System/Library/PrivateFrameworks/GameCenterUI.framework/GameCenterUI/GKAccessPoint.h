@class UIWindow, UIGestureRecognizer, NSObject, GKGameCenterViewController;

@interface GKAccessPoint : NSObject <GKGameCenterControllerDelegate>

@property (class, readonly, nonatomic) GKAccessPoint *shared;

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long hideCount;
@property (nonatomic) BOOL isPresentingGameCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInScreenCoordinates;
@property (retain, nonatomic) id viewController;
@property (retain, nonatomic) GKGameCenterViewController *gameCenterViewController;
@property (retain, nonatomic) NSObject *privateImplementation;
@property (nonatomic) double delay;
@property (nonatomic) double timeLastShown;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long hideCount;
@property (nonatomic) BOOL isPresentingGameCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInScreenCoordinates;
@property (retain, nonatomic) id viewController;
@property (retain, nonatomic) GKGameCenterViewController *gameCenterViewController;
@property (retain, nonatomic) NSObject *privateImplementation;
@property (nonatomic) double delay;
@property (nonatomic) double timeLastShown;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (nonatomic) BOOL showHighlights;
@property (nonatomic) long long location;
@property (weak, nonatomic) UIWindow *parentWindow;

- (void)updateUI;
- (void)resetUI;
- (void).cxx_destruct;
- (void)configureIfNeeded;
- (void)gameCenterViewControllerDidFinish:(id)a0;
- (void)showDashboardWithState:(long long)a0 dismiss:(id /* block */)a1;
- (void)dismissGameCenter;
- (void)triggerAccessPointWithHandler:(id /* block */)a0;
- (void)triggerAccessPointWithState:(long long)a0 handler:(id /* block */)a1;
- (void)loadModels;
- (void)hideAccessPoint;
- (void)showWindow;
- (void)removeWindow;
- (void)showAccessPoint;

@end
