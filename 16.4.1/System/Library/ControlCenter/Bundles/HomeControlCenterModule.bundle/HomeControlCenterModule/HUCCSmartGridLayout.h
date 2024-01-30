@interface HUCCSmartGridLayout : NSObject

+ (double)cellSize;
+ (double)cellSpacing;
+ (id)layoutGeometry;
+ (id)layoutGeometryIsPortrait:(BOOL)a0;
+ (id)layoutOptionsForViewSize:(struct CGSize { double x0; double x1; })a0 andMosaicSize:(unsigned long long)a1;
+ (unsigned long long)mosaicType;

@end
