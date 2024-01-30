@class NSString;

@interface CDBudget : NSObject

@property (readonly) unsigned long long integerId;
@property (readonly) NSString *name;
@property (readonly) long long type;

- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)a0;
- (id)childBudgetWithName:(id)a0 maxFraction:(double)a1 type:(long long)a2 error:(id *)a3;
- (id)childBudgetWithName:(id)a0 maxFraction:(double)a1 type:(long long)a2 withOptions:(unsigned long long)a3 error:(id *)a4;
- (BOOL)compareValueTo:(long long)a0 swapOnMatchWithValue:(long long)a1 error:(id *)a2;
- (long long)creditsRemainingWithError:(id *)a0;
- (BOOL)decrementByValue:(long long)a0 error:(id *)a1;
- (id)forecastEffectiveOnDate:(id)a0 error:(id *)a1;
- (BOOL)incrementByValue:(long long)a0 error:(id *)a1;
- (id)initWithSession:(id)a0 name:(id)a1 type:(long long)a2 integerId:(unsigned long long)a3 error:(id *)a4;

@end
