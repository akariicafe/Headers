@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent;

- (void)setRange:(id)a0;
- (id)ID;
- (id)activationDate;
- (id)initWithQualificationEvent:(id)a0;
- (id)range;
- (void).cxx_destruct;

@end
