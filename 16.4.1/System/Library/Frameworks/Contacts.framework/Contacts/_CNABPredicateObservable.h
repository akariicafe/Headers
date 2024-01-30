@class ABPredicate, NSString, CNContactsEnvironment, CNCancelationToken;
@protocol CNObserver;

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {
    void *_addressBook;
    unsigned int _sortOrdering;
    ABPredicate *_predicate;
    unsigned long long _options;
    CNContactsEnvironment *_environment;
    CNCancelationToken *_cancelationToken;
    id<CNObserver> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribe:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)predicateShouldContinue:(id)a0;
- (BOOL)predicateShouldContinue:(id)a0 afterFindingRecord:(void *)a1;
- (BOOL)predicateShouldContinue:(id)a0 afterFindingRecord:(void *)a1 metadata:(id)a2;
- (BOOL)predicateShouldContinue:(id)a0 afterFindingRecord:(void *)a1 moreComing:(BOOL)a2;

@end
