@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject

@property (readonly, nonatomic) CMSkiTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (void)stopUpdates;
- (id)init;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)querySkiUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
