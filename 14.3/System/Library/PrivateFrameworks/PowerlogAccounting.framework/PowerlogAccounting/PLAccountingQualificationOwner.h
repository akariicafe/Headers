@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingQualificationOwnerManager;

@interface PLAccountingQualificationOwner : PLAccountingOwner

@property (weak) id<PLAccountingQualificationOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)range;
- (id)initWithEnergyEstimate:(id)a0;
- (id)ID;
- (void)run;
- (void).cxx_destruct;
- (id)activationDate;
- (void)setRunDate:(id)a0;
- (void)qualify;

@end
