@class UIWindow, NSString, WFDialogAttribution, UIViewController;
@protocol WFActionUserInterfaceDelegate;

@interface WFActionUserInterface : NSObject <WFActionRemoteUserInterface>

@property (weak, nonatomic) id<WFActionUserInterfaceDelegate> delegate;
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting;
@property (readonly, nonatomic) UIWindow *presentationAnchor;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUserInterfaceType:(id)a0 attribution:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
