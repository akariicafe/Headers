@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface MTExponentialBackOffTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double initialTime;
@property (nonatomic) unsigned long long currentBackoff;
@property (nonatomic) unsigned long long backoffFactor;

+ (id)timerWithInitialTime:(double)a0 fireBlock:(id /* block */)a1;
+ (id)timerWithInitialTime:(double)a0 backoffFactor:(unsigned long long)a1 fireBlock:(id /* block */)a2;
+ (id)timerWithInitialTime:(double)a0 backoffFactor:(unsigned long long)a1 fireBlock:(id /* block */)a2 queue:(id)a3;

- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (id)description;
- (id)initWithInitialTime:(double)a0 backoffFactor:(unsigned long long)a1 fireBlock:(id /* block */)a2 queue:(id)a3;
- (void)start;
- (void)_cancel;
- (void)timerFinished;

@end
