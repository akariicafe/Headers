@class MDFixedModeProvider, NSString, SVXServiceCommandHandlerRegistry, SVXServiceCommandHandlerFallback, SVXServiceCommandDelayedActionStore, SVXModule, NSMutableSet;

@interface SVXServiceCommandHandler : NSObject <SVXModuleInstance> {
    SVXModule *_module;
    SVXServiceCommandHandlerRegistry *_handlerRegistry;
    SVXServiceCommandHandlerFallback *_fallbackHandler;
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    NSMutableSet *_transactions;
    MDFixedModeProvider *_fallbackModeProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithModule:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_handleCommand:(id)a0 taskTracker:(id)a1 completion:(id /* block */)a2;
- (id)fallbackModeProvider;
- (void)handleCommand:(id)a0 taskTracker:(id)a1 completion:(id /* block */)a2;
- (void)handleResult:(id)a0 forCommand:(id)a1 completion:(id /* block */)a2;
- (BOOL)isCommandUUFR:(id)a0;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
