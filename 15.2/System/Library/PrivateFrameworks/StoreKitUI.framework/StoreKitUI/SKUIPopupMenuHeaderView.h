@class NSArray, NSString, SKUIMenuViewController, UILabel, UIPopoverController, UIButton;
@protocol SKUIPopupMenuDelegate;

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    UIButton *_menuButton;
    UILabel *_menuLabel;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_menuPopoverController;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id<SKUIPopupMenuDelegate> delegate;
@property (copy, nonatomic) NSArray *menuItemTitles;
@property (copy, nonatomic) NSString *menuLabelTitle;
@property (nonatomic) long long selectedMenuItemIndex;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)_menuButtonAction:(id)a0;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)_reloadMenuButton;

@end
