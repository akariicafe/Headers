@class NSArray, CAStateController, NSString, CALayer;
@protocol HACCIconViewControllerDelegate;

@interface HACCIconViewController : CCUIButtonModuleViewController

@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSArray *tickLayers;
@property (weak, nonatomic) id<HACCIconViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *assetState;

- (void)stopListening;
- (void)startListening;
- (id)initWithImage:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateViewWithState:(id)a0;
- (void)updateViewWithAudioSample:(id)a0;
- (void)updateViewWithExposure:(float)a0;

@end
