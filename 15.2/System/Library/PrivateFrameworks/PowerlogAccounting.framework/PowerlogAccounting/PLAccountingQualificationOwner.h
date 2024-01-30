@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingQualificationOwnerManager;

@interface PLAccountingQualificationOwner : PLAccountingOwner

@property (weak) id<PLAccountingQualificationOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)ID;
- (void)setRunDate:(id)a0;
- (id)activationDate;
- (id)range;
- (void)run;
- (void)qualify;
- (void).cxx_destruct;
- (id)initWithEnergyEstimate:(id)a0;

@end
