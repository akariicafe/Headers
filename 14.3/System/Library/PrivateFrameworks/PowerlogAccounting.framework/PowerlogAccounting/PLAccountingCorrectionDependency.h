@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency

@property (retain) PLAccountingEnergyEventEntry *energyEvent;

- (id)range;
- (id)ID;
- (id)initWithEnergyEvent:(id)a0;
- (void).cxx_destruct;
- (id)activationDate;

@end
