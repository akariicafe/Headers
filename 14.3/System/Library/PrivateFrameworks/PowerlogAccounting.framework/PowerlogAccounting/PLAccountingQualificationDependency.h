@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent;

- (id)range;
- (id)ID;
- (void)setRange:(id)a0;
- (void).cxx_destruct;
- (id)activationDate;
- (id)initWithQualificationEvent:(id)a0;

@end
