@class NSNumber, NSDateInterval;

@interface RTStoredSettledStateTransitionEnumerationOptions : NSObject

@property (readonly, nonatomic) BOOL ascending;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSNumber *limit;
@property (readonly, nonatomic) unsigned long long batchSize;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAscending:(BOOL)a0 dateInterval:(id)a1 limit:(id)a2 batchSize:(unsigned long long)a3;

@end
