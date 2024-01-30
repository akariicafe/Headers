@class NSString;

@interface WBSHistoryUniversalPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluateVisit:(id)a0;
- (BOOL)evaluateServiceTombstone:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateTombstone:(id)a0;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (BOOL)evaluateServiceVisit:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
