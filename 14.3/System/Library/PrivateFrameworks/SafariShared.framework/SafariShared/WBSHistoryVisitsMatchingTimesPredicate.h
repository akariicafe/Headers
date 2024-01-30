@class NSString, NSDictionary;

@interface WBSHistoryVisitsMatchingTimesPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryStreamedVisitPredicate> {
    NSDictionary *_itemVisitTimeMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluateVisit:(id)a0;
- (void).cxx_destruct;
- (id)initWithCloudVisitIdentifiers:(id)a0;
- (BOOL)evaluateHistoryStreamedVisit:(const struct _HistoryStreamedVisit { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; double x3; char x4; char x5; char x6; int x7; long long x8; long long x9; long long x10; long long x11; long long x12; char *x13; } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemVisitTimeMap:(id)a0;
- (BOOL)_evaluateVisitWithItemID:(long long)a0 visitTime:(double)a1;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (BOOL)evaluateServiceVisit:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
