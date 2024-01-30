@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WFDebouncer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *targetTable;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *maximumDelayTimer;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double maximumDelay;
@property (readonly, nonatomic) id userInfo;

- (void)poke;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2 userInfo:(id)a3;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2;
- (void)fire;
- (void).cxx_destruct;
- (void)resetDelayTimer;
- (void)resetMaximumDelayTimer;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)startMaximumDelayTimerIfNecessary;
- (id)initWithDelay:(double)a0 queue:(id)a1;
- (void)restartDelayTimer;

@end
