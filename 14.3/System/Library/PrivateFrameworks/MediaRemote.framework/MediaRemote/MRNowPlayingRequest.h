@class MRPlayerPath;

@interface MRNowPlayingRequest : NSObject

@property (readonly, copy, nonatomic) MRPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)a0;
- (void).cxx_destruct;
- (void)requestLastPlayingDateOnQueue:(id)a0 completion:(id /* block */)a1;
- (id)lastPlayingDateWithError:(id *)a0;
- (void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)triggerAudioFadeInWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithOrigin:(id)a0;

@end
