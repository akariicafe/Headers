@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingDistributionOwnerManager;

@interface PLAccountingDistributionOwner : PLAccountingOwner

@property (weak) id<PLAccountingDistributionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)range;
- (id)initWithEnergyEstimate:(id)a0;
- (id)ID;
- (void)run;
- (void).cxx_destruct;
- (void)distribute;
- (id)activationDate;
- (void)setRunDate:(id)a0;

@end
