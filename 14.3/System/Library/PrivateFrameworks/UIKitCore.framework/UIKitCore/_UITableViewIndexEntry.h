@class UIImage;

@interface _UITableViewIndexEntry : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id line;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } typeBounds;
@property (nonatomic) struct CGPoint { double x; double y; } baselinePoint;

- (void).cxx_destruct;
- (id)description;

@end
