@class NSTimer, FBKUploadTask;
@protocol FBKSubmissionTimerDelegate;

@interface FBKSubmissionTimer : NSObject

@property (retain) NSTimer *timer;
@property (weak) id<FBKSubmissionTimerDelegate> delegate;
@property (retain) FBKUploadTask *task;
@property double givenInterval;

- (void)dealloc;
- (double)currentInterval;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 forTask:(id)a1 initialTimeout:(double)a2;
- (void)resetTimerWithInterval:(double)a0;
- (void)timerDidTick;

@end
