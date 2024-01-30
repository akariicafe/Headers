@class NSString;
@protocol AutomationOverlayViewControllerDelegate;

@interface AutomationOverlayViewController : UIViewController <AutomationOverlayWindowDelegate> {
    id<AutomationOverlayViewControllerDelegate> _delegate;
    BOOL _allowsUserInteraction;
    BOOL _showDebugUI;
    id /* block */ _resetTemporaryUserInteractionAllowedBlock;
}

@property (readonly, nonatomic) BOOL allowsUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)automationWindowAllowsUserInteraction:(id)a0;
- (void)_interceptUserInteraction;
- (void)_toggleAllowsUserInteractionTemporarily:(BOOL)a0;
- (void)_setAllowsUserInteraction:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
