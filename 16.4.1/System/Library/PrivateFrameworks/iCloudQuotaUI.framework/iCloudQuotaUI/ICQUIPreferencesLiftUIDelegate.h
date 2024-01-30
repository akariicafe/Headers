@class UINavigationController, NSString, ACAccount, ICQLiftUIPresenter;
@protocol PreferencesRemoteUIDelegateProtocol;

@interface ICQUIPreferencesLiftUIDelegate : NSObject <ICQLiftUIPresenterDelegate>

@property (retain, nonatomic) UINavigationController *navigation;
@property (retain, nonatomic) ICQLiftUIPresenter *presenter;
@property (retain, nonatomic) ACAccount *account;
@property (weak, nonatomic) id<PreferencesRemoteUIDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithNavigationController:(id)a0 account:(id)a1;
- (void)liftUIPresenterDidCancel:(id)a0;
- (void)liftUIPresenterDidComplete:(id)a0;

@end
