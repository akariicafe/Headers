@class PRXAction, LAContext, NSString, PKGlyphView, LAUIPhysicalButtonView;
@protocol TSSIMSetupFlowDelegate;

@interface TSSecureIntentGestureViewController : PRXCardContentViewController <LAUIDelegate, TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain, nonatomic) LAContext *context;
@property (retain, nonatomic) PRXAction *confirmTextView;
@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (retain, nonatomic) PKGlyphView *glyphView;
@property (nonatomic) BOOL isExternalizedContextSent;
@property BOOL isSecureIntentFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExternalizedContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (id)_createPKGlyphView;
- (void)_doubleClickGesture;
- (void)_maybeSendExternalizedContext:(id)a0;
- (void)_updateAuthenticationStatus:(BOOL)a0;
- (void)_viewWillComplete;

@end
