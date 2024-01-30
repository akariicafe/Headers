@protocol INVCVoiceShortcutClient;

@interface INVoiceShortcutCenter : NSObject

@property (class, readonly) INVoiceShortcutCenter *sharedCenter;

@property (retain, nonatomic, setter=_setVoiceShortcutClient:) id<INVCVoiceShortcutClient> voiceShortcutClient;

+ (void)initialize;

- (void).cxx_destruct;
- (void)getVoiceShortcutWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)setShortcutSuggestions:(id)a0;
- (id)_initWithVoiceShortcutClient:(id)a0;
- (void)getAllVoiceShortcutsWithCompletion:(id /* block */)a0;

@end
