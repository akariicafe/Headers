@class NSArray;

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode

@property (retain, nonatomic) NSArray *valid;

- (void).cxx_destruct;
- (void)createSubNodes;
- (id)createParentNodesForHours:(id)a0 withPositions:(struct CGPoint { double x0; double x1; } *)a1 validHours:(id)a2;

@end
