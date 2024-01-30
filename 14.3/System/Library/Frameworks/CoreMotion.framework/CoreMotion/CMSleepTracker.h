@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject

@property (readonly, nonatomic) CMSpringTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (id)init;
- (void)startWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)stopWithHandler:(id /* block */)a0;
- (void)querySleepDataFromRecord:(id)a0 handler:(id /* block */)a1;
- (BOOL)isTracking;

@end
