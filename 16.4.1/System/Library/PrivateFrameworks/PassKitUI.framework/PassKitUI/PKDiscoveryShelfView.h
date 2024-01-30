@class NSString;

@interface PKDiscoveryShelfView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSString *itemIdentifier;

+ (id)viewForShelf:(id)a0 discoveryCardViewDelegate:(id)a1;
+ (id)viewForShelf:(id)a0 discoveryCardViewDelegate:(id)a1 itemIdentifier:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
