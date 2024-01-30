@class DOMNode, UIPopoverController, NSString;
@protocol UIWebRotatingNodePopoverDelegate;

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {
    BOOL _isRotating;
}

@property (retain, nonatomic) DOMNode *node;
@property (nonatomic) struct CGPoint { double x; double y; } presentationPoint;
@property (retain, nonatomic) UIPopoverController *popoverController;
@property (nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)willRotate:(id)a0;
- (void)didRotate:(id)a0;
- (id)initWithDOMNode:(id)a0;
- (void)presentPopoverAnimated:(BOOL)a0;
- (unsigned long long)popoverArrowDirections;
- (void)dismissPopoverAnimated:(BOOL)a0;

@end
