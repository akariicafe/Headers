@class NSString, NSData;

@interface WBSHistoryVisitsInTimeRangePredicate : NSObject <WBSHistoryVisitPredicate> {
    double _startTime;
    double _endTime;
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (BOOL)evaluateVisit:(id)a0;
- (BOOL)evaluateServiceVisit:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 urlString:(id)a2 urlHash:(id)a3 urlSalt:(id)a4;

@end
