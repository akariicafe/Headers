@class NSString, NSSet;

@interface _SBMutableDirectToAirPlayPolicyState : _SBDirectToAirPlayPolicyState

@property (copy, nonatomic) NSString *routeName;
@property (copy, nonatomic) NSSet *foregroundEligibleBundleIDs;
@property (copy, nonatomic) NSSet *foregroundIneligibleBundleIDs;
@property (copy, nonatomic) NSSet *foregroundReadyBundleIDs;
@property (copy, nonatomic) NSSet *foregroundPlayingBundleIDs;
@property (copy, nonatomic) NSSet *allForegroundBundleIDs;
@property (copy, nonatomic) NSSet *allPlayingBundleIDs;
@property (nonatomic) BOOL currentRouteIsWired;
@property (nonatomic) BOOL playingAppIsActivelyPlaying;
@property (nonatomic) BOOL suppressReadyStateForLock;
@property (nonatomic) BOOL suppressStateChangesForObscured;
@property (nonatomic) unsigned long long policyStateSerialNumber;

- (void)setForegroundReadyBundleIDs:(id)a0;
- (void)setSuppressReadyStateForLock:(BOOL)a0;
- (void)setForegroundEligibleBundleIDs:(id)a0;
- (void)setForegroundIneligibleBundleIDs:(id)a0;
- (void)setAllPlayingBundleIDs:(id)a0;
- (void)setPlayingAppIsActivelyPlaying:(BOOL)a0;
- (void)setRouteName:(id)a0;
- (void)setAllForegroundBundleIDs:(id)a0;
- (void)setPolicyStateSerialNumber:(unsigned long long)a0;
- (void)setCurrentRouteIsWired:(BOOL)a0;
- (void)setSuppressStateChangesForObscured:(BOOL)a0;
- (void)setForegroundPlayingBundleIDs:(id)a0;

@end
