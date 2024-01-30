@class NSString;
@protocol SBUIPluginControllerHost;

@interface SBUIPluginController : NSObject <SBPluginBundleController>

@property (nonatomic, getter=isVisible) BOOL visible;
@property (weak, nonatomic) id<SBUIPluginControllerHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)supportedAndEnabled;
- (void)registeredWithHost;
- (BOOL)wantsActivationEvent:(int)a0 eventSource:(int)a1 interval:(double *)a2;
- (void)prepareForActivationEvent:(int)a0 eventSource:(int)a1 afterInterval:(double)a2;
- (void)cancelPendingActivationEvent:(int)a0;
- (BOOL)handleActivationEvent:(int)a0 eventSource:(int)a1 context:(void *)a2;
- (BOOL)handledPasscodeUnlockWithCompletion:(id /* block */)a0;
- (BOOL)handledButtonDownEventFromSource:(int)a0;
- (BOOL)handledButtonUpEventFromSource:(int)a0;
- (BOOL)handledButtonTapFromSource:(int)a0;
- (id)viewControllerForActivationContext:(id)a0;

@end
