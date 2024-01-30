@class PNPQuickSwapEventSource, PNPPencilView, NSString, UIPencilInteraction, PNPWizardScratchpadView;

@interface PNPDoubleTapViewController : PNPWelcomeController <UIPencilInteractionDelegate, PNPPencilInteractionEventDestination, PNPWizardScratchpadViewDelegate>

@property (retain, nonatomic) PNPWizardScratchpadView *scratchPadView;
@property (retain, nonatomic) UIPencilInteraction *pencilInteraction;
@property (retain, nonatomic) PNPQuickSwapEventSource *quickSwapEventSource;
@property (retain, nonatomic) PNPPencilView *pencilView;
@property (nonatomic) BOOL animationsCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_controllerWithType:(long long)a0 buttonType:(long long)a1 deviceType:(long long)a2 delegate:(id)a3;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)pencilInteractionDidTap:(id)a0;
- (void).cxx_destruct;
- (void)eventSource:(id)a0 hadPencilDoubleTapped:(id /* block */)a1;
- (void)scratchPadViewHadInteractionEvent:(id)a0;
- (BOOL)scratchPadViewIsPlayingAnimation:(id)a0;

@end
