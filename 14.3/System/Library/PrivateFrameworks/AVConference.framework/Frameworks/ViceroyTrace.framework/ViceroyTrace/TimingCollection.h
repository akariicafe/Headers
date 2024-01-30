@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TimingCollection : NSObject {
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}

- (void)stopTimingForKey:(int)a0;
- (BOOL)hasKey:(int)a0;
- (id)init;
- (void)dealloc;
- (float)totalTimeForKey:(int)a0;
- (void)removeTimingForKey:(int)a0;
- (void)startTimingForKey:(int)a0;
- (id)description;
- (BOOL)isValidTimingForKey:(int)a0;
- (float)timingForKey:(int)a0;
- (void)setTiming:(float)a0 forKey:(int)a1;
- (void)setStartTime:(float)a0 forKey:(int)a1;
- (void)setStopTime:(float)a0 forKey:(int)a1;

@end
