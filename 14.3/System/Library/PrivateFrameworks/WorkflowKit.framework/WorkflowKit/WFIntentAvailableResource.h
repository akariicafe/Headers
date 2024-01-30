@class INIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource

@property (readonly, nonatomic) INIntentExecutionInfo *executionInfo;
@property (readonly, nonatomic) BOOL intentIsSynced;
@property (readonly, nonatomic) BOOL actionRequiresRemoteExecution;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (id)initWithDefinition:(id)a0 intentExecutionInfo:(id)a1 isSyncedFromOtherDevice:(BOOL)a2;
- (BOOL)intentIsEligibleForRemoteExecution;
- (BOOL)intentIsLocallyAvailable;
- (void)updateAvailabilityWithUpdatedVersionRequirementError:(id)a0;

@end
