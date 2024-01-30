@class NSMutableArray;

@interface CRKComparator : NSObject

@property (readonly, nonatomic) NSMutableArray *allCriteria;

+ (id /* block */)compare;
+ (id)compareWithCriteria:(id /* block */)a0;

- (id /* block */)run;
- (void).cxx_destruct;
- (id)init;
- (id /* block */)compare;
- (id)compareWithCriteria:(id /* block */)a0;
- (long long)runComparison;

@end
