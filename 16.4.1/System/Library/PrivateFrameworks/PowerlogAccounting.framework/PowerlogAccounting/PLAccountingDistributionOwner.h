@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingDistributionOwnerManager;

@interface PLAccountingDistributionOwner : PLAccountingOwner

@property (weak) id<PLAccountingDistributionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (void)run;
- (id)range;
- (id)ID;
- (void)setRunDate:(id)a0;
- (id)activationDate;
- (id)initWithEnergyEstimate:(id)a0;
- (void)distribute;
- (void).cxx_destruct;

@end
