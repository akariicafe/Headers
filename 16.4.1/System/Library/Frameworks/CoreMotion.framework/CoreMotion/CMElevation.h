@class CMAltimeterInternal;

@interface CMElevation : NSObject

@property (readonly, nonatomic) CMAltimeterInternal *_internal;

+ (BOOL)isElevationAvailable;

- (void)dealloc;
- (id)init;
- (void)startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopElevationUpdates;

@end
