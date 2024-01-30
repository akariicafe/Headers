@class NSArray, ICRadioPlaybackHistoryItem;

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory

@property (copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack;
@property (nonatomic) long long numberOfSkips;
@property (copy, nonatomic) NSArray *tracks;

- (void)addTrack:(id)a0;
- (void)addTracks:(id)a0;
- (void)_updateTracksUsingBlock:(id /* block */)a0;
- (void)_checkCurrentTrackIsPresent;
- (void)removeExpiredTracks;
- (void)removeTracksAtIndexes:(id)a0;
- (void)replaceTrackAtIndex:(long long)a0 withTrack:(id)a1;
- (void)setCurrentTrack:(id)a0;
- (void)setNumberOfSkips:(long long)a0;
- (void)setTracks:(id)a0;

@end
