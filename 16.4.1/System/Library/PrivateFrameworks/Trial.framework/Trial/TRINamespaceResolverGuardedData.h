@class NSDictionary, NSMutableDictionary;

@interface TRINamespaceResolverGuardedData : NSObject {
    NSDictionary *plplist;
    NSMutableDictionary *targetedRolloutDeploymentMap;
    NSMutableDictionary *targetedExperimentDeploymentMap;
    BOOL hasIssuedWarnings;
}

- (void).cxx_destruct;

@end
