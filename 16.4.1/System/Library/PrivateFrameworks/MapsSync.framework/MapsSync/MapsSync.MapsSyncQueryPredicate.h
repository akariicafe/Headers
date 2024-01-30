@interface MapsSync.MapsSyncQueryPredicate : NSCompoundPredicate

@property (nonatomic, readonly) Class classForCoder;

+ (Class)classForKeyedUnarchiver;
+ (id)queryPredicateWithFormat:(id)a0 argumentArray:(id)a1;

- (id)not;
- (id)initWithNot:(id)a0;
- (id)initWithAnd:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithFormat:(id)a0 args:(id)a1;
- (id)initWithOr:(id)a0;
- (id)initWithCenterLatitude:(double)a0 centerLongitude:(double)a1 squareSideLengthMeters:(double)a2;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;

@end
