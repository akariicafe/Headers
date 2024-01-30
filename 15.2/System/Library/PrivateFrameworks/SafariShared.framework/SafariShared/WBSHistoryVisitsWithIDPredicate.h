@class NSString, WBSSetInt64;

@interface WBSHistoryVisitsWithIDPredicate : NSObject <WBSHistoryVisitPredicate> {
    WBSSetInt64 *_visits;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateServiceVisit:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateVisit:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (id)initWithHistoryVisitIDs:(id)a0;

@end
