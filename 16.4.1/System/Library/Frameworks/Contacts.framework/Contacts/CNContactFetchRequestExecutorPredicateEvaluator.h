@class NSString, CNObservable, CNContactFetchRequest;
@protocol CNDataMapper;

@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject <CNPredicateVisitor> {
    CNContactFetchRequest *_fetchRequest;
    id<CNDataMapper> _dataMapper;
    CNObservable *_observable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitFalsePredicate:(id)a0;
- (void)visitTruePredicate:(id)a0;
- (void)visitOrPredicate:(id)a0;
- (void)visitNSCompoundPredicate:(id)a0;
- (void)visitAndPredicate:(id)a0;
- (void)visitNSPredicate:(id)a0;
- (void)visitNotPredicate:(id)a0;
- (id)evaluateSubpredicate:(id)a0;
- (id)copyFetchRequestWithPredicate:(id)a0;
- (void)visitCNPredicate:(id)a0;
- (void).cxx_destruct;

@end
