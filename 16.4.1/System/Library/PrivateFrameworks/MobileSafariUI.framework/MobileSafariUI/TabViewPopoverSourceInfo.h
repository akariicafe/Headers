@class BrowserController, NSString, UIView, UIBarButtonItem;

@interface TabViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    long long _barItem;
    BrowserController *_browserController;
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

- (void).cxx_destruct;
- (long long)_tabOverviewBarButton;
- (id)initWithBrowserController:(id)a0 barItem:(long long)a1;

@end
