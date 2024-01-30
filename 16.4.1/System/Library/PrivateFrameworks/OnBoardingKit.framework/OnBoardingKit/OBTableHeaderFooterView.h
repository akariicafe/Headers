@class NSArray, UIView;

@interface OBTableHeaderFooterView : UIView

@property (retain, nonatomic) UIView *internalContentView;
@property (retain, nonatomic) UIView *hostedView;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } internalContentPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hostedViewPadding;
@property (retain, nonatomic) NSArray *hostedConstraints;
@property (retain, nonatomic) NSArray *internalContentConstraints;

- (id)initWithLayout:(unsigned long long)a0;
- (void)_applyLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_layoutContainerForTableFooter;
- (void)_layoutContainerForTableHeader;

@end
