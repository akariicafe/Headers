@class NSArray, NSMutableDictionary, NSValue;

@interface CKQuadTreeNode : NSObject {
    CKQuadTreeNode *_topRight;
    CKQuadTreeNode *_topLeft;
    CKQuadTreeNode *_bottomLeft;
    CKQuadTreeNode *_bottomRight;
    NSMutableDictionary *_userInfo;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSValue *point;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)visit:(id /* block */)a0;
- (id)debugDescription;
- (id)debugDescriptionWithLevel:(long long)a0;
- (id)nodeForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)insertPoint:(struct CGPoint { double x0; double x1; })a0;

@end
