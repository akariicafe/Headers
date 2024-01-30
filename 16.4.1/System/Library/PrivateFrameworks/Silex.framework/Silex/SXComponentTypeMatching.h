@class NSMutableArray;

@interface SXComponentTypeMatching : NSObject

@property (readonly, nonatomic) NSMutableArray *descriptions;

- (id)match:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addDescription:(id)a0;
- (void)removeDescription:(id)a0;

@end
