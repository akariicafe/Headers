@class NSString, _UIButtonBar, NSArray, UIScrollView;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    BOOL _overLightKeyboard;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBarButtonItemGroups:(id)a0 fromButtonBar:(id)a1 createsPopoverLayoutGuides:(BOOL)a2;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_cleanupForDismissal;
- (BOOL)_canShowWhileLocked;
- (void)dismissIfNecessary;

@end
