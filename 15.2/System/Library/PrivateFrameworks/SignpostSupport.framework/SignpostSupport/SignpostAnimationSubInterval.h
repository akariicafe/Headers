@class NSString;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>

@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)durationSeconds;
- (double)endMs;
- (unsigned long long)durationMachContinuousTime;
- (id)initWithInterval:(id)a0;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)startNanoseconds;
- (unsigned long long)endNanoseconds;
- (double)startSeconds;
- (double)endSeconds;
- (double)startMs;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2;

@end
