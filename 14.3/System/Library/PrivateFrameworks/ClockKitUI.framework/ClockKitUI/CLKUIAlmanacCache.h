@class NSCache, NSLock;

@interface CLKUIAlmanacCache : NSObject {
    NSCache *_cache;
    NSLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)almanacForLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2;
- (id)_locked_almanacForLocation:(struct { double x0; double x1; })a0 altitude:(double)a1 time:(double)a2;
- (void)_locked_setAlmanac:(id)a0 forLocation:(struct { double x0; double x1; })a1 altitude:(double)a2;

@end
