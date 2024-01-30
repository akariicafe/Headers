@class MPMediaControls;

@interface AVExternalPlaybackController : NSObject {
    MPMediaControls *_mediaControls;
    id /* block */ _clientCompletionHandler;
}

+ (id)externalPlaybackStateDescriptionForState:(long long)a0;

- (void).cxx_destruct;
- (void)_invokeClientCompletionHandlerWithPlaybackState:(long long)a0;
- (void)willBeginPlaybackFromAppWithBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginPlaybackWithCompletionHandler:(id /* block */)a0;

@end
