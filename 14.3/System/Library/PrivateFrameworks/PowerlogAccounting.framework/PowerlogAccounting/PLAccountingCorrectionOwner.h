@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingCorrectionOwnerManager;

@interface PLAccountingCorrectionOwner : PLAccountingOwner

@property (weak) id<PLAccountingCorrectionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate;

- (id)range;
- (id)ID;
- (void)run;
- (void).cxx_destruct;
- (void)correct;
- (id)activationDate;
- (id)initWithRootEnergyEstimate:(id)a0;
- (void)setRunDate:(id)a0;

@end
