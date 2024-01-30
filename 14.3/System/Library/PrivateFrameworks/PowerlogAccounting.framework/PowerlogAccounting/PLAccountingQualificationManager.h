@protocol PLAccountingQualificationManagerDelegate;

@interface PLAccountingQualificationManager : PLAccountingOwnerDependencyManager

@property (weak) id<PLAccountingQualificationManagerDelegate> delegate;

+ (double)freeTimerInterval;

- (void).cxx_destruct;
- (void)addQualificationEvent:(id)a0;
- (void)didQualifyEnergyEvent:(id)a0 withRootNodeID:(id)a1 withQualificationID:(id)a2;
- (id)ownerIDsForDependency:(id)a0;
- (void)closeLastQualificationEventForwardWithQualificationID:(id)a0 withEndDate:(id)a1;
- (id)dependencyIDsForOwner:(id)a0;
- (void)reloadDependenciesNewerThanDate:(id)a0;
- (void)addEnergyEstimate:(id)a0 withNow:(id)a1;

@end
