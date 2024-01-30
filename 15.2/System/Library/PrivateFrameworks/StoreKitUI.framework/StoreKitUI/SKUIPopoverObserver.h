@class NSString, UIPopoverController;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (id)initWithPopoverController:(id)a0;
- (void)dealloc;
- (void)setTarget:(id)a0 selector:(SEL)a1;

@end
