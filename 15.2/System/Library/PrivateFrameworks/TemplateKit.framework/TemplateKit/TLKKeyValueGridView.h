@class NSMutableArray;

@interface TLKKeyValueGridView : NUIContainerGridView

@property (retain, nonatomic) NSMutableArray *keyLabels;
@property (retain, nonatomic) NSMutableArray *valueLabels;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithTuples:(id)a0 valueColumnIsTrailing:(BOOL)a1 truncateKey:(BOOL)a2;

@end
