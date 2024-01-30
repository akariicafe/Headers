@class FMSongRendition, FMSong;

@interface FlexAudioClip : AudioClip

@property (retain, nonatomic) FMSong *song;
@property (retain, nonatomic) FMSongRendition *songRendition;
@property (readonly, nonatomic) int sampleRate;
@property (nonatomic) BOOL lockedRendition;

+ (id)backgroundClipWithSong:(id)a0;
+ (id)optionsForSong:(id)a0 withDuration:(double)a1;

- (void)setDuration:(int)a0;
- (void).cxx_destruct;
- (int)duration;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)songUID;
- (void)setSongUID:(id)a0;
- (int)clipType;
- (int)rawSourceDuration;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (void)refreshSong;
- (void)generateEdits;
- (void)outroStingerTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 earlyFadeStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;

@end
