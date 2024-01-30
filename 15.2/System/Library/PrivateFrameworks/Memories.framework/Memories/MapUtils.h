@interface MapUtils : NSObject

+ (id)locationWithImageURL:(id)a0;
+ (float)bestEndingLongitude:(float)a0 forShortestTripFromLongitude:(float)a1;
+ (struct CGPoint { double x0; double x1; })pixelFromLatitude:(float)a0 longitude:(float)a1 onEquirectangularMapWithSize:(struct CGSize { double x0; double x1; })a2 geographicBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })geographicRectFromPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onEquirectangularMapWithSize:(struct CGSize { double x0; double x1; })a1 geographicBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
