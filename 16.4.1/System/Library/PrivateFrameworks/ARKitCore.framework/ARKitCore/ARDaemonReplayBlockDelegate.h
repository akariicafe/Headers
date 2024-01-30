@class NSString;

@interface ARDaemonReplayBlockDelegate : NSObject <ARDaemonReplayDelegate>

@property (copy, nonatomic) id /* block */ replayFailedBlock;
@property (copy, nonatomic) id /* block */ replayStartedBlock;
@property (copy, nonatomic) id /* block */ replayUpdatedBlock;
@property (copy, nonatomic) id /* block */ replayStoppedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)replayDidFailWithError:(id)a0;
- (void)replayDidStartWithReplayTime:(double)a0;
- (void)replayDidStop;
- (void)replayDidUpdateResource:(id)a0 withKey:(id)a1 atTime:(double)a2;

@end
