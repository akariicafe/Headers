@class NSArray, NSMutableArray;

@interface CRLatticeRun : NSObject

@property (retain, nonatomic) NSMutableArray *mutablePaths;
@property (readonly, nonatomic) NSArray *paths;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) NSArray *graphEdges;

- (void)setGraph:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)appendPath:(id)a0;

@end
