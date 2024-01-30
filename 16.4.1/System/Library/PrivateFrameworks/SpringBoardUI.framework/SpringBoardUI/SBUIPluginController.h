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
- (BOOL)handledButtonUpEventFromSource:(int)a0;
- (void)cancelPendingActivationEvent:(int)a0;
- (BOOL)handleActivationEvent:(int)a0 eventSource:(int)a1 context:(void *)a2;
- (BOOL)handledButtonDownEventFromSource:(int)a0;
- (BOOL)handledButtonTapFromSource:(int)a0;
- (BOOL)handledPasscodeUnlockWithCompletion:(id /* block */)a0;
- (void)prepareForActivationEvent:(int)a0 eventSource:(int)a1 afterInterval:(double)a2;
- (void)registeredWithHost;
- (id)viewControllerForActivationContext:(id)a0;
- (BOOL)wantsActivationEvent:(int)a0 eventSource:(int)a1 interval:(double *)a2;

@end
