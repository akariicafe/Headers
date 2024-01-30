@class UIAlertController, AXElement, NSString;
@protocol CACElementActionsPresentationViewControllerDelegate;

@interface CACElementActionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACViewController>

@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<CACElementActionsPresentationViewControllerDelegate> elementActionsDelegate;
@property (retain, nonatomic) AXElement *element;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

+ (id)_elementActionManager;
+ (BOOL)canShowElementActionsForElement:(id)a0;

- (void)prepareForPopoverPresentation:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)actionForAXAction:(id)a0;
- (void)performHideWithCompletion:(id /* block */)a0;

@end
