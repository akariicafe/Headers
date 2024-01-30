@class CompassImageNode, NSMutableDictionary;

@interface CompassAtlasManifest : NSObject {
    CompassImageNode *_rootNode;
    NSMutableDictionary *_items;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })addItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForItem:(id)a0;

@end
