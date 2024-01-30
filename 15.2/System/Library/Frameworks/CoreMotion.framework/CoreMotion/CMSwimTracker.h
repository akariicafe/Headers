@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject

@property (readonly, nonatomic) CMSwimTrackerInternal *_internal;

+ (unsigned long long)maxSwimDataEntries;
+ (BOOL)isAvailable;

- (void)stopUpdates;
- (id)init;
- (void)querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
