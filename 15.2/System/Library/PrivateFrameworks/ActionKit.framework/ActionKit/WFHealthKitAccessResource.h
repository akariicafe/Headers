@class HKHealthStore;

@interface WFHealthKitAccessResource : WFAccessResource {
    unsigned long long _status;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;

+ (BOOL)isSystemResource;
+ (BOOL)alwaysMakeAvailable;

- (id)objectTypes;
- (unsigned long long)status;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)a0;
- (id)objectTypesForAccessType:(id)a0;
- (id)readTypes;
- (id)writeTypes;
- (id)readableUnauthorizedResourceDescription;

@end
