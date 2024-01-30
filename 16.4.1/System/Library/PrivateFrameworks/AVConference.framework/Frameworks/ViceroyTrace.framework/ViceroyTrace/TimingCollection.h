@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TimingCollection : NSObject {
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}

- (void)startTimingForKey:(int)a0;
- (double)totalTimeForKey:(int)a0;
- (void)stopTimingForKey:(int)a0;
- (void)dealloc;
- (BOOL)hasKey:(int)a0;
- (id)init;
- (id)description;
- (void)removeTimingForKey:(int)a0;
- (BOOL)isValidTimingForKey:(int)a0;
- (void)setStartTime:(double)a0 forKey:(int)a1;
- (void)setStopTime:(double)a0 forKey:(int)a1;
- (void)setTiming:(double)a0 forKey:(int)a1;
- (double)timingForKey:(int)a0;

@end
