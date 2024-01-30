@class NSArray, NSMutableArray;

@interface CRLatticeResults : NSObject

@property (retain, nonatomic) NSMutableArray *mutableResults;
@property (readonly, nonatomic) NSArray *results;

- (void).cxx_destruct;
- (id)init;
- (void)addResult:(id)a0;

@end
