@class JEMediaTimeTrackerDateProvider, NSDate;

@interface JEMediaTimeTracker : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long position;
@property (nonatomic) float playbackRate;
@property (retain, nonatomic) JEMediaTimeTrackerDateProvider *dateProvider;

- (void).cxx_destruct;
- (void)updatePosition:(unsigned long long)a0;
- (id)estimatedTimeAtPastPosition:(unsigned long long)a0;
- (id)estimatedTimeAtPosition:(unsigned long long)a0;
- (id)initWithPosition:(unsigned long long)a0 playbackRate:(float)a1;
- (void)updatePosition:(unsigned long long)a0 playbackRate:(float)a1;

@end
