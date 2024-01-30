@class NSMutableArray;

@interface SXComponentTypeMatching : NSObject

@property (readonly, nonatomic) NSMutableArray *descriptions;

- (id)init;
- (void).cxx_destruct;
- (id)match:(id)a0;
- (void)addDescription:(id)a0;
- (void)removeDescription:(id)a0;

@end
