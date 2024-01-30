@class UIBarButtonItem, NSString, UIView;

@interface _SFUIViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    UIView *_view;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (readonly, nonatomic) BOOL shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) BOOL shouldPassthroughSuperview;
@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) long long provenance;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
