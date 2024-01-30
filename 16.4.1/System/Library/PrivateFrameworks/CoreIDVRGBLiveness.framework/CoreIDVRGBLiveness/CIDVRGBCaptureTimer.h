@class NSTimer, NSNumber;

@interface CIDVRGBCaptureTimer : NSObject {
    NSTimer *_timer;
    NSNumber *_remainingDuration;
    id /* block */ _block;
}

- (void)_runBlock;
- (void)pause;
- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithDuration:(double)a0 block:(id /* block */)a1;

@end
