@class NSURL;

@interface WFWebViewLink : NSObject

@property (readonly, nonatomic) NSURL *href;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (void).cxx_destruct;
- (id)initWithHref:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
