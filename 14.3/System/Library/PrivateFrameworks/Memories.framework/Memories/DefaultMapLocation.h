@interface DefaultMapLocation : MapLocation

- (BOOL)isResolved;
- (void)resolveWithCompletionHandler:(id /* block */)a0;
- (BOOL)isResolving;
- (BOOL)hasValidCoordinate;

@end
