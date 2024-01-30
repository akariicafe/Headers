@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface HDFitnessMachineStateTimer : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_timerWithDuration:(long long)a0 queue:(id)a1 handler:(id /* block */)a2;

- (void)cancel;
- (void)begin;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithName:(id)a0 duration:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
