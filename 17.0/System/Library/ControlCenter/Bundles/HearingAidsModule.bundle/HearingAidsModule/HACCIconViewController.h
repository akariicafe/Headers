@class NSArray, CAStateController, NSString, CALayer;
@protocol HACCIconViewControllerDelegate;

@interface HACCIconViewController : CCUIButtonModuleViewController

@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSArray *tickLayers;
@property (weak, nonatomic) id<HACCIconViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *assetState;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithImage:(id)a0;
- (void)startListening;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)stopListening;
- (void)updateViewWithAudioSample:(id)a0;
- (void)updateViewWithExposure:(float)a0;
- (void)updateViewWithState:(id)a0;

@end
