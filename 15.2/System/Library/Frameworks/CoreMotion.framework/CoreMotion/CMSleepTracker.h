@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject

@property (readonly, nonatomic) CMSpringTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (BOOL)isTracking;
- (void)startWithHandler:(id /* block */)a0;
- (id)init;
- (void)stopWithHandler:(id /* block */)a0;
- (void)querySleepDataFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)dealloc;

@end
