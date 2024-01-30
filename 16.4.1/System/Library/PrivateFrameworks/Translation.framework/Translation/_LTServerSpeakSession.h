@class NSObject, _LTPlaybackService;
@protocol _LTTranslationEngine, OS_dispatch_queue;

@interface _LTServerSpeakSession : NSObject {
    id<_LTTranslationEngine> _engine;
    _LTPlaybackService *_player;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithEngine:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)_createTemporaryOutputFileWithURL:(id)a0;
- (void)_playback:(id)a0 context:(id)a1 completion:(id /* block */)a2 audioStartHandler:(id /* block */)a3;
- (void)speak:(id)a0 context:(id)a1 completion:(id /* block */)a2 audioStartHandler:(id /* block */)a3;

@end
