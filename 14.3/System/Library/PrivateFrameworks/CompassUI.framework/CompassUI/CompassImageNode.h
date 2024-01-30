@class NSString;

@interface CompassImageNode : NSObject

@property (retain, nonatomic) CompassImageNode *leftChild;
@property (retain, nonatomic) CompassImageNode *rightChild;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (copy, nonatomic) NSString *imageKey;

- (void).cxx_destruct;
- (id)insertImageWithSize:(struct CGSize { double x0; double x1; })a0 key:(id)a1;

@end
