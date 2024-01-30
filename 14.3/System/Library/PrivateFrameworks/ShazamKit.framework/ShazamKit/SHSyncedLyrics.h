@class NSArray, NSString, NSTimer, NSDate;
@protocol SHSyncedLyricsDelegate;

@interface SHSyncedLyrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *lines;
@property (copy, nonatomic) NSString *attribution;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSDate *lyricsStartDate;
@property (nonatomic) double timeWarp;
@property (weak, nonatomic) id<SHSyncedLyricsDelegate> delegate;
@property (nonatomic) double preCueDuration;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)snippetFromOffset:(double)a0;
- (id)initWithLyricsStartDate:(id)a0 lines:(id)a1 attribution:(id)a2;
- (void)startSyncing;
- (void)stopSyncing;
- (double)offsetFromStartDate;
- (id)currentLyricLineForOffset:(double)a0;
- (double)timeToLine:(id)a0 afterDuration:(double)a1;
- (double)fireTimeForLine:(id)a0;

@end
