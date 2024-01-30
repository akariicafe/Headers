@class NSArray, UIBarButtonItem, UIView;

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) unsigned long long permittedArrowDirections;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (retain, nonatomic) UIView *anchorView;
@property (retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
