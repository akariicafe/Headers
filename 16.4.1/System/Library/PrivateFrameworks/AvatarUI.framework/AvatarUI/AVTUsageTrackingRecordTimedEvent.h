@class NSDate;
@protocol AVTAvatarRecord;

@interface AVTUsageTrackingRecordTimedEvent : NSObject

@property (retain, nonatomic) NSDate *currentStartTime;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) id<AVTAvatarRecord> record;

- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 record:(id)a1;
- (void)pauseAtTime:(id)a0;
- (void)resumeAtTime:(id)a0;
- (double)totalElapsedTimeAtTime:(id)a0;

@end
