@class NSString, WBSSetInt64;

@interface WBSHistoryVisitsWithItemsPredicate : NSObject <WBSHistoryVisitPredicate> {
    WBSSetInt64 *_itemIdentifiers;
    WBSSetInt64 *_ignoredVisitIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHistoryItems:(id)a0 ignoreVisits:(id)a1;
- (BOOL)evaluateVisit:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (BOOL)evaluateServiceVisit:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
