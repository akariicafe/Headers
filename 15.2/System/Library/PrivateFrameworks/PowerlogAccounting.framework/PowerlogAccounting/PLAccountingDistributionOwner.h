@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingDistributionOwnerManager;

@interface PLAccountingDistributionOwner : PLAccountingOwner

@property (weak) id<PLAccountingDistributionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)ID;
- (void)setRunDate:(id)a0;
- (id)activationDate;
- (id)range;
- (void)run;
- (void)distribute;
- (void).cxx_destruct;
- (id)initWithEnergyEstimate:(id)a0;

@end
