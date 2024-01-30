@protocol BLSHDisableCommitOnWakeMeasurementProvider;

@interface BLSHDisableCommitOnWakeMeasurementAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHDisableCommitOnWakeMeasurementProvider> _provider;
}

+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)a0 provider:(id)a1;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (void)deactivateWithFinalEntry:(id)a0;
- (void).cxx_destruct;

@end
