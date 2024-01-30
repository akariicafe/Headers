@class NSSet, NSMutableSet;

@interface SBAlwaysOnPolicyCoordinator : NSObject {
    NSMutableSet *_policies;
}

@property (readonly, nonatomic) NSSet *activePolicies;

- (void)activate;
- (void).cxx_destruct;
- (void)_activatePolicy:(id)a0;
- (void)addExternalPolicy:(id)a0;
- (void)removeExternalPolicy:(id)a0;

@end
