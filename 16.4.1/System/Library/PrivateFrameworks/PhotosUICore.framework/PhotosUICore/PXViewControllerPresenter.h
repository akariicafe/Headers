@class NSString, UIViewController, UIView;
@protocol UIPopoverPresentationControllerSourceItem;

@interface PXViewControllerPresenter : NSObject <PXPresentationEnvironment>

@property (retain, nonatomic) UIViewController *baseViewController;
@property (retain, nonatomic) id<UIPopoverPresentationControllerSourceItem> sourceItem;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPresenterWithViewController:(id)a0;
+ (id)popoverPresenterWithViewController:(id)a0 sourceItem:(id)a1;
+ (id)popoverPresenterWithViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;

@end
