@class VIOntologyNode;

@interface VIDetectedResult : NSObject

@property (readonly, nonatomic) VIOntologyNode *ontologyNode;
@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) float score;

- (void).cxx_destruct;
- (id)initWithOntologyNode:(id)a0 position:(long long)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 score:(float)a3;

@end
