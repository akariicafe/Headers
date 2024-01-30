@class _PXStoryFeedInlinePlaybackController;

@interface _PXStoryFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    long long _desiredPlayState;
}

@property (weak, nonatomic) _PXStoryFeedInlinePlaybackController *inlinePlaybackController;

- (void)setDesiredPlayState:(long long)a0;
- (void).cxx_destruct;
- (long long)desiredPlayState;

@end
