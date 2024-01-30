@class NSString, UIWindow;
@protocol PRUIModalControllerDelegate, PRUIModalEntryPoint;

@interface PRUIModalController : NSObject <PRUIModalRemoteViewControllerDelegate> {
    UIWindow *_window;
    id<PRUIModalEntryPoint> _entryPoint;
}

@property (weak, nonatomic) id<PRUIModalControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntryPoint:(id)a0;
- (void)modalRemoteViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)modalRemoteViewController:(id)a0 willDismissWithResponse:(id)a1;
- (void)handleHostSceneTransitionedFromActiveState;
- (void)presentFromWindowScene:(id)a0;

@end
