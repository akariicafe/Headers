@class NSString, NSHashTable;

@interface SBActionHandler : NSObject <SBFActionProviding> {
    BOOL _capturingDisplayDump;
    NSHashTable *_externalHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeActionHandler:(id)a0;
- (void)_reportAndKillInsecureProcesses:(id)a0;
- (BOOL)_shouldPromptForSecureDrawViolations;
- (void)handleActions:(id)a0 origin:(id)a1 withResult:(id /* block */)a2;
- (void)addActionHandler:(id)a0;
- (void)_captureRadarAttachmentsWithCompletion:(id /* block */)a0;
- (void)_executeRestartAction:(id)a0 fromProcess:(id)a1;

@end
