@class NSArray, NSMutableArray;

@interface CRLatticeResults : NSObject

@property (retain, nonatomic) NSMutableArray *mutableResults;
@property (readonly, nonatomic) NSArray *results;

- (id)init;
- (void).cxx_destruct;
- (void)addResult:(id)a0;

@end
