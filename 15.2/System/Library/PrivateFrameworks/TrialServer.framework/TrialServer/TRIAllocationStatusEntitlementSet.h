@class NSSet;

@interface TRIAllocationStatusEntitlementSet : NSObject <TRIAllocationStatusEntitled> {
    NSSet *_allowedDeploymentEnvironments;
}

- (void).cxx_destruct;
- (id)allowedDeploymentEnvironments;
- (id)initWithAllowedDeploymentEnvironments:(id)a0;

@end
