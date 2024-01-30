@interface KenBurnsMovie : Movie

- (double)durationInSeconds;
- (int)duration;
- (void)updateLocation;
- (void)resetAssetAvailability;
- (void)updateAssetAvailability;
- (BOOL)titleIsLocalizable;
- (BOOL)isKenBurnsMovie;

@end
