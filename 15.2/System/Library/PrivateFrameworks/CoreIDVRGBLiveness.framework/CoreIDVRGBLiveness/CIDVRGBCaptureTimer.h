@class NSTimer, NSNumber;

@interface CIDVRGBCaptureTimer : NSObject {
    NSTimer *_timer;
    NSNumber *_remainingDuration;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)pause;
- (void)_runBlock;
- (void)resume;
- (void)cancel;
- (id)initWithDuration:(double)a0 block:(id /* block */)a1;

@end
