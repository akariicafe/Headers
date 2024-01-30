@class UIVisualEffectView, ISPaneFrameView, NSLayoutConstraint, UIViewController;

@interface SlidingPaneViewState : NSObject

@property (retain, nonatomic) UIViewController *paneViewController;
@property (retain, nonatomic) ISPaneFrameView *paneView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) NSLayoutConstraint *paneVerticalPositionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paneHorizontalPositionConstraint;
@property (nonatomic) BOOL shouldNotifyOfPaneSizeChanges;
@property (nonatomic) unsigned long long edge;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithViewController:(id)a0 edge:(unsigned long long)a1;

@end
