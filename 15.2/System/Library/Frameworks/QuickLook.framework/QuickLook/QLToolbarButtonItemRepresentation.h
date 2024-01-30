@class NSString, QLToolbarButton, QLPreviewController, UILongPressGestureRecognizer;

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem

@property (retain) NSString *identifier;
@property unsigned long long placement;
@property BOOL disappearsOnTap;
@property (weak) QLToolbarButton *originalButton;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (weak) QLPreviewController *presentingViewController;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setLongPressTarget:(id)a0 action:(SEL)a1;

@end
