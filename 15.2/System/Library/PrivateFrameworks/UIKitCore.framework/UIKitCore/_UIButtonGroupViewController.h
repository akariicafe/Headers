@class UIColor, NSString, _UIButtonBar, NSArray, UIScrollView;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    BOOL _overLightKeyboard;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBarButtonItemGroups:(id)a0 fromButtonBar:(id)a1 createsPopoverLayoutGuides:(BOOL)a2;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_cleanupForDismissal;
- (void)dismissIfNecessary;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
