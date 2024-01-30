@class NSArray;

@interface FlexLegacySongRendition : FMSongRendition

@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) long long durationOfUsedOutro;
@property (nonatomic) long long durationOfFullOutro;

+ (long long)_durationOfOutroForPlaylist:(id)a0 onlyUsedDuration:(BOOL)a1;

- (void).cxx_destruct;
- (id)_buildOutroFadeoutMixParams;
- (void)_buildTracksFromSegments:(id)a0;
- (id)initWithSong:(id)a0 segments:(id)a1 withOptions:(id)a2;

@end
