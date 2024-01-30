@class NSString, NSMutableDictionary;
@protocol PLAccountingCorrectionManagerDelegate;

@interface PLAccountingCorrectionManager : PLAccountingOwnerDependencyManager <PLAccountingCorrectionOwnerManager>

@property (retain, nonatomic) NSMutableDictionary *parentEntryIDToChildEnergyEstimates;
@property (weak) id<PLAccountingCorrectionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)disableCorrection;
+ (double)freeTimerInterval;

- (void).cxx_destruct;
- (void)addEnergyMeasurement:(id)a0;
- (id)ownerIDsForDependency:(id)a0;
- (void)correctChildEnergyEstimate:(id)a0 withParentEnergyEstimate:(id)a1 withNow:(id)a2;
- (void)didCorrectEnergyEstimate:(id)a0;
- (void)addRootEnergyEstimate:(id)a0 withNow:(id)a1;
- (id)dependencyIDsForOwner:(id)a0;
- (void)reloadDependenciesNewerThanDate:(id)a0;
- (id)childEnergyEstimatesForParentEntryID:(int)a0;

@end
