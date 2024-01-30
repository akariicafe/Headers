@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IMTimer : NSObject {
    id _timer;
    id _target;
    NSString *_name;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_queue;
    SEL _selector;
    BOOL _wakeDevice;
    BOOL _useCurrentRunLoop;
}

@property (retain, nonatomic) id userInfo;
@property (readonly, retain, nonatomic) NSDate *fireDate;

- (void)setFireTimeInterval:(double)a0;
- (void)_reschedulePCPersistentTimer;
- (id)initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(BOOL)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 useCurrentRunLoop:(BOOL)a6;
- (void)dealloc;
- (id)initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(BOOL)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5;
- (id)_initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(BOOL)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 useCurrentRunLoop:(BOOL)a6 queue:(id)a7;
- (void)invalidate;
- (id)initWithTimeInterval:(double)a0 name:(id)a1 shouldWake:(BOOL)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 queue:(id)a6;
- (void).cxx_destruct;

@end
