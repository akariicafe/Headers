@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject

@property (readonly, nonatomic) CMSwimTrackerInternal *_internal;

+ (BOOL)isAvailable;
+ (unsigned long long)maxSwimDataEntries;

- (id)init;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)stopUpdates;
- (void)querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
