@class NSArray;

@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {
    NSArray *_videoResources;
    NSArray *_playableVideos;
    BOOL _masterVideoIsPresent;
    BOOL _masterVideoIsPlayable;
}

@property (readonly, nonatomic) NSArray *preferredVideoResources;

- (void).cxx_destruct;
- (id)initWithVideoResources:(id)a0;

@end
