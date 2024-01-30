@class HFMediaPlaybackActionBuilder, HFPlaybackArchive;

@interface HFMediaActionSetting : NSObject

@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaActionBuilder;
@property (nonatomic) long long originalHMNonPausePlaybackState;
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive;

- (void).cxx_destruct;
- (void)updatePlaybackState:(long long)a0;
- (id)initWithActionBuilder:(id)a0;

@end
