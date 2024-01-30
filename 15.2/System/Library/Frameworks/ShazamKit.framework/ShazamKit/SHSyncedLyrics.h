@class NSArray, NSTimer, NSDate;
@protocol SHSyncedLyricsDelegate;

@interface SHSyncedLyrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *lines;
@property (retain, nonatomic) NSArray *songwriters;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSDate *lyricsStartDate;
@property (nonatomic) double timeWarp;
@property (weak, nonatomic) id<SHSyncedLyricsDelegate> delegate;
@property (nonatomic) double preCueDuration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLyricsStartDate:(id)a0 lines:(id)a1 songwriters:(id)a2;
- (void)startSyncing;
- (void)stopSyncing;
- (double)offsetFromStartDate;
- (id)currentLyricLineForOffset:(double)a0;
- (double)timeToLine:(id)a0 afterDuration:(double)a1;
- (double)fireTimeForLine:(id)a0;

@end
