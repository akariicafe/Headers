@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingCorrectionOwnerManager;

@interface PLAccountingCorrectionOwner : PLAccountingOwner

@property (weak) id<PLAccountingCorrectionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate;

- (id)ID;
- (void)setRunDate:(id)a0;
- (id)activationDate;
- (void)correct;
- (id)range;
- (void)run;
- (id)initWithRootEnergyEstimate:(id)a0;
- (void).cxx_destruct;

@end
