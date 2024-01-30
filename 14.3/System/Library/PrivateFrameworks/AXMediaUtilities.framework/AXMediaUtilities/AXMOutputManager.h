@class NSString, AXMSpeechComponent, AXMTaskDispatcher, NSArray, AXMSoundComponent, NSObject, AXMAudioSession, AXMHapticComponent;
@protocol OS_dispatch_queue;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {
    AXMTaskDispatcher *_outputRequests;
    BOOL _usesPrivateAudioSession;
    AXMAudioSession *_audioSession;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    AXMSoundComponent *_queue_soundComponent;
    AXMSpeechComponent *_queue_speechComponent;
    AXMHapticComponent *_queue_hapticComponent;
    NSArray *_queue_activeComponents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatcher:(id)a0 handleTask:(id)a1;
- (void).cxx_destruct;
- (void)speak:(id)a0;
- (void)disable;
- (void)playSound:(id)a0;
- (void)interrupt:(id)a0;
- (id)dispatchRequest:(id)a0;
- (id)initWithComponents:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)enableWithCompletion:(id /* block */)a0;
- (void)interruptImmediately;
- (void)interruptPolitely;
- (id)playActiveSound:(id)a0;

@end
