@class NSArray, UIPopoverController, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue

@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;
@property (nonatomic, setter=_setPermittedArrowDirections:) unsigned long long _permittedArrowDirections;
@property (retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem *_anchorBarButtonItem;
@property (retain, nonatomic, setter=_setAnchorView:) UIView *_anchorView;
@property (nonatomic, setter=_setAnchorRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _anchorRect;
@property (readonly, nonatomic) UIPopoverController *popoverController;

- (void).cxx_destruct;
- (void)perform;

@end
