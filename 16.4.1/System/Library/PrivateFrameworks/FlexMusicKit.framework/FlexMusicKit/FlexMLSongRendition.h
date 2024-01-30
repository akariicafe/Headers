@class FlexMLSummary;

@interface FlexMLSongRendition : FMSongRendition

@property (retain, nonatomic) FlexMLSummary *summary;

- (void).cxx_destruct;
- (id)_buildOutroFadeoutMixParams;
- (void)_buildTracks;
- (void)_calculateDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithSong:(id)a0 options:(id)a1 andSummary:(id)a2 forDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
