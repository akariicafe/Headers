@interface FRCFaceHandLegBlock : NSObject

@property (nonatomic) unsigned long long category;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) unsigned long long numberOfBlocks;

+ (id)faceHandLegBlockWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfBlocks:(unsigned long long)a1 category:(unsigned long long)a2;

@end
