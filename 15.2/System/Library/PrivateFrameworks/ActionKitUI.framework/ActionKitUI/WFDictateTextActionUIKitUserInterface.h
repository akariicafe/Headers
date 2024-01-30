@class WFDictateTextActionView, NSString;

@interface WFDictateTextActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFDictateTextActionViewDelegate, WFDictateTextActionUserInterface>

@property (retain, nonatomic) WFDictateTextActionView *actionView;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (BOOL)prefersModalPresentation;
- (void)actionDidBeginListening;
- (void)actionDidReceiveTranscription:(id)a0;
- (void)dictateTextActionViewDidTapStopButton:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
