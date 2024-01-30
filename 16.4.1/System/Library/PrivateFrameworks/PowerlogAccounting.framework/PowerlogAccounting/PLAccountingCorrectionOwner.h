@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingCorrectionOwnerManager;

@interface PLAccountingCorrectionOwner : PLAccountingOwner

@property (weak) id<PLAccountingCorrectionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate;

- (void)run;
- (id)range;
- (id)ID;
- (void)setRunDate:(id)a0;
- (id)activationDate;
- (id)initWithRootEnergyEstimate:(id)a0;
- (void).cxx_destruct;
- (void)correct;

@end
