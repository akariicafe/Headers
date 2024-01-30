@class NSArray, NSString, UIView;
@protocol DBEnvironment;

@interface DBWidgetViewController : UIViewController <DBWidgetViewFocusEnabledProviding>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dimmingView;
@property (readonly, nonatomic) NSArray *linearFocusItems;
@property (readonly, weak, nonatomic) id<DBEnvironment> environment;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL wantsLargeSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_wallpaperChanged:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (BOOL)entireWidgetFocusable;
- (void)invalidateConstraints;
- (void)updateAppearanceForWallpaper;
- (void)widgetViewTapped;

@end
