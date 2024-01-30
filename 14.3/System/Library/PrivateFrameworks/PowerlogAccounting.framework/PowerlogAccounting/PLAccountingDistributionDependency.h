@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency

@property (retain) PLAccountingDistributionEventEntry *distributionEvent;

- (id)range;
- (id)ID;
- (void)setRange:(id)a0;
- (void).cxx_destruct;
- (id)activationDate;
- (id)initWithDistributionEvent:(id)a0;

@end
