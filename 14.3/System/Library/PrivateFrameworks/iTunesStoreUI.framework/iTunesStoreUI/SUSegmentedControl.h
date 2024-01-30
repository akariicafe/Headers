@class SUClientInterface, NSString, NSArray, SUSimpleMenuViewController, UISegmentedControl, UIPopoverController, NSMutableArray, UIColor;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    BOOL _autosizesText;
    BOOL _hidingPopoverForRotation;
    NSMutableArray *_items;
    SUSimpleMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    long long _selectionIndex;
}

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long maximumNumberOfItems;
@property (nonatomic) double maximumWidth;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *moreListTitle;
@property (readonly, nonatomic) long long numberOfVisibleSegments;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedItemIndex;
@property (readonly, nonatomic) long long selectedSegmentIndex;
@property (nonatomic) BOOL showsMoreListAutomatically;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long tintStyle;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDividerImage:(id)a0 forLeftSegmentState:(unsigned long long)a1 rightSegmentState:(unsigned long long)a2 barMetrics:(long long)a3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)a0 rightSegmentState:(unsigned long long)a1 barMetrics:(long long)a2;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)_reloadData;
- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)backgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (void)layoutSubviews;
- (void)setTitle:(id)a0 forSegmentAtIndex:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 forSegmentAtIndex:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applyStyling;
- (void)_destroyPopoverController;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)sizeToFitUserInterfaceIdiom;
- (void)menuViewControllerDidCancel:(id)a0;
- (void)sizeToFitWithMinimumSegmentWidth:(double)a0 maximumTotalWidth:(double)a1;
- (void)_windowDidRotateNotification:(id)a0;
- (void)_windowWillRotateNotification:(id)a0;
- (void)showMoreList:(BOOL)a0 animated:(BOOL)a1;
- (void)showPopover:(id)a0 fromSegmentIndex:(long long)a1 animated:(BOOL)a2;
- (void)_valueChangedEvent:(id)a0;
- (void)_setValue:(id)a0 forSegmentAtIndex:(unsigned long long)a1;
- (void)_showMoreList:(BOOL)a0;
- (void)_destroyMenuViewController;
- (void)_presentPopoverAnimated:(BOOL)a0;
- (id)_titlesForMoreList;

@end
