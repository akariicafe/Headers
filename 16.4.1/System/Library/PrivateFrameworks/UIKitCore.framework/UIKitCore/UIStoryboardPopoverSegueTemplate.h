@class NSArray, UIBarButtonItem, UIView;

@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) unsigned long long permittedArrowDirections;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (retain, nonatomic) UIView *anchorView;
@property (retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)segueWithDestinationViewController:(id)a0;

@end
