@class NSString, SVXSessionManager, SVXModule;

@interface _SVXServiceCommandHandlerPlayVoiceMail : NSObject <SVXServiceCommandHandling> {
    SVXSessionManager *_sessionManager;
    SVXModule *_module;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)_audioPlaybackDuration:(id)a0;
- (void)_markVoiceMailAsRead:(id)a0 forRemoteDevice:(id)a1;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithSessionManager:(id)a0 module:(id)a1;
- (BOOL)isCommandUUFR:(id)a0;

@end
