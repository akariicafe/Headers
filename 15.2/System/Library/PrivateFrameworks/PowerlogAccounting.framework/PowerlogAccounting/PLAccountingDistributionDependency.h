@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency

@property (retain) PLAccountingDistributionEventEntry *distributionEvent;

- (void)setRange:(id)a0;
- (id)ID;
- (id)activationDate;
- (id)range;
- (void).cxx_destruct;
- (id)initWithDistributionEvent:(id)a0;

@end
