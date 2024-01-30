@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency

@property (retain) PLAccountingEnergyEventEntry *energyEvent;

- (id)ID;
- (id)activationDate;
- (id)range;
- (void).cxx_destruct;
- (id)initWithEnergyEvent:(id)a0;

@end
