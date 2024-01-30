@class NSString, UIPopoverController, WKContentView;
@protocol WKRotatingPopoverDelegate;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {
    BOOL _isRotating;
    BOOL _isPreservingFocus;
    struct RetainPtr<UIPopoverController> { void *m_ptr; } _popoverController;
}

@property (readonly, nonatomic) WKContentView *view;
@property (nonatomic) struct CGPoint { double x; double y; } presentationPoint;
@property (retain, nonatomic) UIPopoverController *popoverController;
@property (nonatomic) id<WKRotatingPopoverDelegate> dismissionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willRotate:(id)a0;
- (id).cxx_construct;
- (id)initWithView:(id)a0;
- (void)didRotate:(id)a0;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)popoverArrowDirections;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)presentPopoverAnimated:(BOOL)a0;

@end
