@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingQualificationOwnerManager;

@interface PLAccountingQualificationOwner : PLAccountingOwner

@property (weak) id<PLAccountingQualificationOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (void)run;
- (id)range;
- (id)ID;
- (void)setRunDate:(id)a0;
- (void)qualify;
- (id)activationDate;
- (id)initWithEnergyEstimate:(id)a0;
- (void).cxx_destruct;

@end
