@class INCExtensionProxy, NSObject, INIntent;
@protocol OS_dispatch_queue, INVCVoiceShortcutClient;

@interface INSExtensionServiceIntentExecutor : NSObject

@property (retain, nonatomic) id<INVCVoiceShortcutClient> voiceShortcutClient;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) INCExtensionProxy *extensionProxy;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 extensionProxy:(id)a1 queue:(id)a2;
- (id)initWithVoiceShortcutClient:(id)a0 intent:(id)a1;
- (void)sendAceCommand:(id)a0 completionHandler:(id /* block */)a1;

@end
