@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency

@property (retain) PLAccountingDistributionEventEntry *distributionEvent;

- (void)setRange:(id)a0;
- (id)range;
- (id)ID;
- (id)initWithDistributionEvent:(id)a0;
- (id)activationDate;
- (void).cxx_destruct;

@end
