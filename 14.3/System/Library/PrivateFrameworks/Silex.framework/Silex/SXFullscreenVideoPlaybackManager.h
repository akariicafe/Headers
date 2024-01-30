@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject {
    BOOL _transitionInProgress;
    BOOL _layoutInProgress;
    NSHashTable *_candidates;
}

- (id)init;
- (void).cxx_destruct;

@end
