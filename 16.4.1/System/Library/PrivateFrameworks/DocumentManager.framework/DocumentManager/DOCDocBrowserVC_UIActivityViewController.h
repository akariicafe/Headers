@class UIBarButtonItem;
@protocol DOCServicePopoverTrackerProtocol;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController

@property (retain) id<DOCServicePopoverTrackerProtocol> popoverTracker;
@property (weak) UIBarButtonItem *barButtonItem;

- (void).cxx_destruct;

@end
