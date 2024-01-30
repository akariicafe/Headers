@class NSData;

@interface MKTileOverlayTile : NSObject

@property (nonatomic) struct { long long x; long long y; long long z; double contentScaleFactor; } path;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } frame;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSData *image;

- (void).cxx_destruct;
- (id)description;

@end
