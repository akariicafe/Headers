@class MPAlternateTextTrack, NSArray, NSString, MPAVItem, NSDictionary, NSMutableDictionary, AVPlayerItemLegibleOutput;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
    AVPlayerItemLegibleOutput *_legibleOutput;
    MPAlternateTextTrack *_currentTextTrack;
}

@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (retain, nonatomic) NSArray *outOfBandTextTracks;
@property (nonatomic) BOOL disableAlternateTextTrackRendering;
@property (retain, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleLanguages;

- (void)reloadData;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)legibleOutput:(id)a0 didOutputAttributedStrings:(id)a1 nativeSampleBuffers:(id)a2 forItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(unsigned long long)a0;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)a0;
- (id)tracksForType:(unsigned long long)a0;
- (void)setTrack:(id)a0 forType:(unsigned long long)a1;
- (BOOL)hasTracksForTypes:(unsigned long long)a0;
- (unsigned long long)trackCountForTypes:(unsigned long long)a0;
- (void)reloadDataWithChangedCaptionDisplayType:(BOOL)a0;
- (void)enableLegibleOutputIfNecessary;
- (id)_keyForTrackType:(unsigned long long)a0;
- (id)_currentTextTrackAccordingToAVF;
- (void)_suppressAVFSubtitleRendering;

@end
