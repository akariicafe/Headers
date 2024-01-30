@interface OAVShapeGeometry : NSObject

+ (id)readFromManager:(id)a0;
+ (struct OADAdjustCoord { BOOL x0; int x1; })readAdjustCoord:(id)a0;
+ (void)readAdjustValuesFromManager:(id)a0 toGeometry:(id)a1;
+ (void)readLimoFromManager:(id)a0 toGeometry:(id)a1;
+ (void)readTextBodyRectsFromManager:(id)a0 toGeometry:(id)a1;

@end
