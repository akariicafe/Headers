@interface UIWebFormRotatingAccessoryPopover : UIWebRotatingNodePopover <UIWebRotatingNodePopoverDelegate>

- (void)accessoryDone;
- (id)initWithDOMNode:(id)a0;
- (void)popoverWasDismissed:(id)a0;
- (unsigned long long)popoverArrowDirections;

@end
