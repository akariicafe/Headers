@interface KenBurnsMovie : Movie

- (int)duration;
- (double)durationInSeconds;
- (void)updateLocation;
- (void)resetAssetAvailability;
- (void)updateAssetAvailability;
- (BOOL)titleIsLocalizable;
- (BOOL)isKenBurnsMovie;

@end
