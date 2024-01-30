@class UILabel;

@interface PXLabelAnimationContext : NSObject

@property (retain) UILabel *label;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 andDestinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
