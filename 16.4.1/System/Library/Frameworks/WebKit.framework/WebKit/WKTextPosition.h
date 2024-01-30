@interface WKTextPosition : UITextPosition

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positionRect;

+ (id)textPositionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (BOOL)isEqual:(id)a0;
- (id)description;

@end
