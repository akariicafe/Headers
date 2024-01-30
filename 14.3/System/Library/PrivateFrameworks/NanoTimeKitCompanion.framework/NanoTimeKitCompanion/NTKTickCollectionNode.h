@class UIColor;

@interface NTKTickCollectionNode : NTKCollectionNode {
    UIColor *_customSmallTickColor;
}

@property (nonatomic) unsigned int ticks;
@property (nonatomic) double smallColor;
@property (nonatomic) double largeColor;
@property (nonatomic) struct CGSize { double width; double height; } smallSizeInPoints;
@property (nonatomic) struct CGSize { double width; double height; } largeSizeInPoints;
@property (nonatomic) double smallFilterWidth;
@property (nonatomic) double largeFilterWidth;
@property (nonatomic) unsigned int l1mod;
@property (nonatomic) unsigned int l2mod;

- (void).cxx_destruct;
- (void)createSubNodes;
- (id)smallTickColor;
- (id)largeTickColor;
- (void)colorizeWithTickColor:(id)a0 alternateTickColor:(id)a1;
- (void)colorizeBackground:(id)a0;

@end
