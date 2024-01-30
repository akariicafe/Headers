@class NSObject;
@protocol OS_dispatch_queue;

@interface CMActivityAlarm : NSObject {
    BOOL fIsValid;
    struct __CFRunLoop { } *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    id /* block */ fHandler;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned int trigger;

+ (id)activityAlarmInfo;
+ (BOOL)activityAlarmAvailable;

- (void)fire;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithTrigger:(unsigned int)a0 duration:(double)a1 onQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)invalidate;
- (id)initWithTrigger:(unsigned int)a0 duration:(double)a1 onRunLoop:(struct __CFRunLoop { } *)a2 withHandler:(id /* block */)a3;

@end
