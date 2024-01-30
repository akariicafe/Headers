@class UIBarButtonItem, UIView;

@interface WFAlertPresentationSource : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) BOOL canOverlapSourceViewRect;

+ (id)sourceWithView:(id)a0;
+ (id)sourceWithView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)sourceWithBarButtonItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 barButtonItem:(id)a2;

@end
