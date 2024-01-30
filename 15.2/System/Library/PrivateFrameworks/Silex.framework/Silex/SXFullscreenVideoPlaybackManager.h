@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject {
    BOOL _transitionInProgress;
    BOOL _layoutInProgress;
    NSHashTable *_candidates;
}

- (void).cxx_destruct;
- (id)init;

@end
