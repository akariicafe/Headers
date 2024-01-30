@interface DefaultMapLocation : MapLocation

- (BOOL)isResolved;
- (BOOL)isResolving;
- (void)resolveWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasValidCoordinate;

@end
