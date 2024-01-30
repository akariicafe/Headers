@class NSTimer;

@interface AXUpdateElementVisualsCoalescer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double lastProgressTime;
@property (nonatomic) double threshold;
@property (nonatomic) double progressInterval;
@property (copy, nonatomic) id /* block */ updateVisualsSequenceDidBeginHandler;
@property (copy, nonatomic) id /* block */ updateVisualsSequenceDidFinishHandler;
@property (copy, nonatomic) id /* block */ updateVisualsSequenceInProgressHandler;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_timerDidFire:(id)a0;
- (void)notifyUpdateElementVisualsEventDidOccur;

@end
