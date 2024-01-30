@interface CIBurstFaceInfo : NSObject

@property int swFaceId;
@property struct CGPoint { double x; double y; } swCenter;
@property struct CGSize { double width; double height; } swSize;
@property int swLastFrameSeen;
@property int hwFaceId;
@property struct CGPoint { double x; double y; } hwCenter;
@property struct CGSize { double width; double height; } hwSize;
@property int hwLastFrameSeen;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hwFaceRect;
- (float)overlapWithHwRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)overlapWithSwRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swFaceRect;

@end
