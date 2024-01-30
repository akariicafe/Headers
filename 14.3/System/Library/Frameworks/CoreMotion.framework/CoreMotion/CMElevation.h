@class CMAltimeterInternal;

@interface CMElevation : NSObject

@property (readonly, nonatomic) CMAltimeterInternal *_internal;

+ (BOOL)isElevationAvailable;

- (id)init;
- (void)dealloc;
- (void)startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopElevationUpdates;

@end
