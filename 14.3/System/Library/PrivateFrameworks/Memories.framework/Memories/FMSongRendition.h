@class FMTrack, NSDictionary, NSObject;
@protocol FlexSongProtocol;

@interface FMSongRendition : NSObject

@property (retain, nonatomic) NSObject<FlexSongProtocol> *song;
@property (retain, nonatomic) FMTrack *trackA;
@property (retain, nonatomic) FMTrack *trackB;
@property (nonatomic) long long duration;
@property (nonatomic) long long durationOfSilence;
@property (nonatomic) long long durationOfMusic;
@property (readonly, nonatomic) NSDictionary *options;

+ (id)coalesceMixParamsA:(id)a0 withMixParamsB:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)timedMetadataItemsWithIdentifier:(id)a0;
- (id)avCompositionWithAudioMix:(id *)a0 includeShortenedOutroFadeOut:(BOOL)a1;
- (id)_buildOutroFadeoutMixParams;
- (id)initWithSong:(id)a0 andOptions:(id)a1;
- (double)_maxPeakAndLoudness:(double *)a0 missingPeakValueCount:(int *)a1 missingLoudnessCount:(int *)a2;

@end
