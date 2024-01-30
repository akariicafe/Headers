@class NSTimer;

@interface AXUpdateElementVisualsCoalescer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double lastProgressTime;
@property (nonatomic) double threshold;
@property (nonatomic) double progressInterval;
@property (copy, nonatomic) id /* block */ updateVisualsSequenceDidBeginHandler;
@property (copy, nonatomic) id /* block */ updateVisualsSequenceDidFinishHandler;
@property (copy, nonatomic) id /* block */ updateVisualsSequenceInProgressHandler;

- (void).cxx_destruct;
- (id)init;
- (void)_timerDidFire:(id)a0;
- (void)notifyUpdateElementVisualsEventDidOccur;
- (void)dealloc;

@end
