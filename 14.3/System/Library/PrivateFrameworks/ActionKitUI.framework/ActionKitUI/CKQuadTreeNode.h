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

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)visit:(id /* block */)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)debugDescriptionWithLevel:(long long)a0;
- (id)nodeForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)insertPoint:(struct CGPoint { double x0; double x1; })a0;

@end
