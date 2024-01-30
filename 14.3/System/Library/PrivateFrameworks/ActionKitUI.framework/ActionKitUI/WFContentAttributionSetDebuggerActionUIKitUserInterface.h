@class NSString;

@interface WFContentAttributionSetDebuggerActionUIKitUserInterface : WFActionUserInterface <WFContentAttributionSetDebuggerActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void).cxx_destruct;
- (void)done;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithInput:(id)a0 completionHandler:(id /* block */)a1;

@end
