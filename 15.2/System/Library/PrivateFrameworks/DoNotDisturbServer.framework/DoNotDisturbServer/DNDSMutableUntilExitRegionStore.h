@class NSArray, CLRegion, NSNumber;

@interface DNDSMutableUntilExitRegionStore : DNDSUntilExitRegionStore

@property (copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (copy, nonatomic) CLRegion *currentRegion;
@property (copy, nonatomic) NSNumber *regionEntered;
@property (copy, nonatomic) NSNumber *hasActiveLifetimes;

- (void)setRegionEntered:(id)a0;
- (void)setHasActiveLifetimes:(id)a0;
- (void)setActiveLifetimeAssertionUUIDs:(id)a0;
- (void)setCurrentRegion:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
