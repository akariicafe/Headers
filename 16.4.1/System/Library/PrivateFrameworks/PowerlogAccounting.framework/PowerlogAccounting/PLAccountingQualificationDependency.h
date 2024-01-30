@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent;

- (void)setRange:(id)a0;
- (id)range;
- (id)ID;
- (id)activationDate;
- (id)initWithQualificationEvent:(id)a0;
- (void).cxx_destruct;

@end
