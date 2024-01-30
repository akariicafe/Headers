@class UITapGestureRecognizer, CPSVoiceView, NSString;

@interface CPSVoiceTemplateViewController : CPSBaseTemplateViewController <CPVoiceTemplateProviding>

@property (retain, nonatomic) CPSVoiceView *titleView;
@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer;
@property (nonatomic) double lastVoiceTemplateStateChangeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_activateStateWithIdentifier:(id)a0;
- (void)_backGestureFired:(id)a0;
- (id)_stateWithIdentifier:(id)a0;
- (void)_viewDidLoad;
- (id)initWithVoiceTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;
- (id)voiceTemplate;

@end
