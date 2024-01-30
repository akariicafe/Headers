@class UILongPressGestureRecognizer, UISwipeGestureRecognizer, DBSmartWidgetView, NSSet, UITapGestureRecognizer, NSString, DBSmartWidgetEngine, UIActivityIndicatorView;
@protocol DBSmartWidgetAnimating;

@interface DBSmartWidgetViewController : DBWidgetViewController <DBSmartWidgetEngineObserver, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) DBSmartWidgetEngine *engine;
@property (retain, nonatomic) DBSmartWidgetView *widgetView;
@property (nonatomic) long long currentPredictionIndex;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) NSSet *recognizers;
@property (retain, nonatomic) UITapGestureRecognizer *actionRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *actionSelectRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *refreshRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *previousPredictionRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *nextPredictionRecognizer;
@property (weak, nonatomic) id<DBSmartWidgetAnimating> animationDelegate;
@property (nonatomic) BOOL wantsToShowPrediction;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refresh;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_performAction;
- (void)_nextPrediction;
- (void)_previousPrediction;
- (void)_updatePrediction;
- (id)initWithEnvironment:(id)a0 engine:(id)a1 animationDelegate:(id)a2;
- (void)smartWidgetEngine:(id)a0 didUpdateCurrentPredictions:(id)a1;
- (void)smartWidgetEngineDidStart:(id)a0;
- (void)smartWidgetEngineDidStop:(id)a0;
- (void)smartWidgetEngineDidUpdatePredictionsFresh:(id)a0;

@end
