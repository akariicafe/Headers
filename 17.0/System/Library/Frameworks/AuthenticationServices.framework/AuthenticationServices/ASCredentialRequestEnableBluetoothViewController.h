@class NSObject, ASCAuthorizationPresentationContext;
@protocol OS_os_activity;

@interface ASCredentialRequestEnableBluetoothViewController : ASCredentialRequestPaneViewController {
    NSObject<OS_os_activity> *_authorizationActivity;
}

@property (readonly, nonatomic) ASCAuthorizationPresentationContext *presentationContext;
@property (copy, nonatomic) id /* block */ enableBluetoothHandler;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_message;
- (void)_setUpTitlePane;
- (void)_enableBluetooth;
- (void)_setUpButtonPane;
- (void)_setUpMessagePane;
- (id)initWithPresentationContext:(id)a0 activity:(id)a1;

@end
