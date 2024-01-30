@interface CMPhotoTile : NSObject

@property (nonatomic) struct __IOSurface { } *decodedSurface;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (retain, nonatomic) id key;
@property (nonatomic) BOOL visible;

- (id)description;
- (void)dealloc;

@end
