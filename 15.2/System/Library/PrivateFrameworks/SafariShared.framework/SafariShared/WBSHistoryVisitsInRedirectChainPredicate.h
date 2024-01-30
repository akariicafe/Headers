@class NSString, WBSSetInt64;

@interface WBSHistoryVisitsInRedirectChainPredicate : NSObject <WBSHistoryVisitPredicate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WBSSetInt64 *visitIdentifiers;
@property (readonly, nonatomic) WBSSetInt64 *ignoredItemIdentifiers;
@property (readonly, nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateServiceVisit:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateVisit:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (id)initWithHistoryVisits:(id)a0 ignoredItems:(id)a1 direction:(long long)a2;

@end
