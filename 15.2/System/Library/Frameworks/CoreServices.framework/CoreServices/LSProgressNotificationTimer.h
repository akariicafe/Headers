@class NSTimer, NSMutableSet, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface LSProgressNotificationTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *lastFiredDate;
@property (retain, nonatomic) NSMutableSet *applications;
@property (readonly, nonatomic) double minInterval;
@property (readonly, nonatomic) double latency;
@property SEL appObserverSelector;

- (void)removeApplication:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)sendMessage:(id)a0;
- (void)notifyObservers:(id)a0 withApplications:(id)a1;
- (void)clear;
- (void)stopTimer;
- (id)description;
- (void).cxx_destruct;
- (void)addApplication:(id)a0;
- (void)dealloc;

@end
