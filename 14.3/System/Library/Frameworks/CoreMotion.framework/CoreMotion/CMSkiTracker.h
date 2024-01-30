@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject

@property (readonly, nonatomic) CMSkiTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (id)init;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)stopUpdates;
- (void)querySkiUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
