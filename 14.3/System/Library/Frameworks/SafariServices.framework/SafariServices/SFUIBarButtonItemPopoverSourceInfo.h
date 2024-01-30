@class UIBarButtonItem, NSString, UIView;

@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    UIBarButtonItem *_item;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;

@end
