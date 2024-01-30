@class NSObject, _LTPlaybackService;
@protocol _LTTranslationEngine, OS_dispatch_queue;

@interface _LTServerSpeakSession : NSObject {
    id<_LTTranslationEngine> _engine;
    _LTPlaybackService *_player;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)_playback:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)speak:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)initWithEngine:(id)a0;

@end
