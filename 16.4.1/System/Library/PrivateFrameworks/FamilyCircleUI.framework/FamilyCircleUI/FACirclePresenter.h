@class RemoteUIController, NSString, FACircleRemoteUIDelegate, FAProfilePictureStore, RUIStyle, UIViewController;
@protocol FACirclePresenterDelegate;

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate> {
    RemoteUIController *_remoteUIController;
    FACircleRemoteUIDelegate *_remoteUIDelegate;
    FAProfilePictureStore *_familyPictureStore;
    id /* block */ _completion;
}

@property (retain, nonatomic) UIViewController *presenter;
@property (retain, nonatomic) RUIStyle *customRUIStyle;
@property (weak) id<FACirclePresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadRequest:(id)a0 completion:(id /* block */)a1;
- (id)_serverHookHandlerWithRemoteUIController:(id)a0;
- (void)circleRemoteUIDelegate:(id)a0 completedWithResponse:(id)a1;
- (void)circleRemoteUIDelegateDidPresent:(id)a0;
- (id)initWithPresenter:(id)a0 context:(id)a1;

@end
