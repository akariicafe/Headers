@class NSString;

@interface WFPrintActionUIKitUserInterface : WFActionUserInterface <UIPrintInteractionControllerDelegate, WFPrintActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)printInteractionControllerParentViewController:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithFile:(id)a0 completionHandler:(id /* block */)a1;

@end
