@class NSString, PCPersistentTimer, NSDate;

@interface MSVPersistentTimer : NSObject {
    PCPersistentTimer *_timer;
    NSString *_name;
    id /* block */ _block;
    NSDate *_startDate;
    double _interval;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)_handleTimerElapsed:(id)a0;
- (void)invalidateWithReason:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 name:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)invalidate;
- (void)dealloc;

@end
