@class NSString, NSTimer, SBHUDController, UIViewController;
@protocol SBHUDViewControlling;

@interface _SBHUDModel : NSObject <_SBHUDHostViewControllerDelegate, SBHUDControlling> {
    NSTimer *_dismissalTimer;
}

@property (nonatomic, setter=setPresented:) BOOL isPresented;
@property (nonatomic, setter=setPresenting:) BOOL isPresenting;
@property (nonatomic, setter=setDismissing:) BOOL isDismissing;
@property (nonatomic, setter=setDismissed:) BOOL isDismissed;
@property (readonly, nonatomic) SBHUDController *HUDController;
@property (readonly, nonatomic) UIViewController<SBHUDViewControlling> *HUDViewController;
@property (readonly, nonatomic) double dismissalInterval;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isDismissalScheduled) BOOL dismissalScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isVisible;

+ (id)HUDModelForController:(id)a0 viewController:(id)a1 identifier:(id)a2;

- (void)dismiss;
- (void)dismissAnimated:(BOOL)a0;
- (void)hudViewController:(id)a0 didDismissHUD:(id)a1;
- (void)hudViewController:(id)a0 willDismissHUD:(id)a1;
- (void)hudViewController:(id)a0 willPresentHUD:(id)a1;
- (void)hudViewController:(id)a0 didPresentHUD:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidateDismissalTimer;
- (void)presentWithDismissalInterval:(double)a0;
- (void)presentWithDismissalInterval:(double)a0 animated:(BOOL)a1;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;

@end
