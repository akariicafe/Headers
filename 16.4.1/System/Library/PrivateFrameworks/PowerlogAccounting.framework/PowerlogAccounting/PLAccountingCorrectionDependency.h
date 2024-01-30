@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency

@property (retain) PLAccountingEnergyEventEntry *energyEvent;

- (id)range;
- (id)ID;
- (id)initWithEnergyEvent:(id)a0;
- (id)activationDate;
- (void).cxx_destruct;

@end
