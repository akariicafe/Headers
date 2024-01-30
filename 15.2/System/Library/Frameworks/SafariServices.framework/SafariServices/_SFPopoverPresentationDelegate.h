@class NSString, UIPopoverPresentationController;
@protocol _SFPopoverSourceInfo;

@interface _SFPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {
    id<_SFPopoverSourceInfo> _sourceInfo;
    UIPopoverPresentationController *_popoverPresentationController;
}

@property (nonatomic) BOOL popoverUsesAdaptivePresentationInCompact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachDelegateToPopoverPresentationController:(id)a0 anchoredToURLOutlineInNavigationBar:(id)a1 usesAdaptivePresentationInCompact:(BOOL)a2;
+ (void)attachDelegateToPopoverPresentationController:(id)a0 anchoredToReloadButtonInNavigationBar:(id)a1;
+ (void)attachDelegateToPopoverPresentationController:(id)a0 anchoredToURLOutlineInNavigationBar:(id)a1;

- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)initWithSourceInfo:(id)a0;
- (void)attachToPopoverPresentationController:(id)a0;
- (void)updatePopoverPosition;

@end
