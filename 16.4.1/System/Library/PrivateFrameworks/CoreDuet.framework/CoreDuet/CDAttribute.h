@class NSString;

@interface CDAttribute : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *fullName;
@property (readonly) long long type;

- (BOOL)setCategory:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)destroyWithError:(id *)a0;
- (BOOL)associateToBudget:(id)a0 error:(id *)a1;
- (BOOL)occurredWithValue:(id)a0 cost:(long long)a1 error:(id *)a2;
- (BOOL)reset:(long long)a0 error:(id *)a1;
- (id)temporalForecastOfValue:(id)a0 forHistoryWindow:(id)a1 forecastType:(long long)a2 maximumElements:(unsigned long long)a3 error:(id *)a4;

@end
