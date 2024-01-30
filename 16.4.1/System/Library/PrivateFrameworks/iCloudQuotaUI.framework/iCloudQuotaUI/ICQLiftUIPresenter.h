@class _TtC13iCloudQuotaUI19ICQLiftUIDataSource, NSDictionary, ICQLiftUIController, NSURL;
@protocol ICQLiftUIPresenterDelegate;

@interface ICQLiftUIPresenter : NSObject

@property (retain, nonatomic) _TtC13iCloudQuotaUI19ICQLiftUIDataSource *dataSource;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) ICQLiftUIController *controller;
@property (retain, nonatomic) NSURL *liftUIPageURL;
@property (weak, nonatomic) id<ICQLiftUIPresenterDelegate> delegate;

- (void)didCancel;
- (void).cxx_destruct;
- (void)didFinish;
- (void)didLoadWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)embedInViewController:(id)a0;
- (id)initWithURL:(id)a0 account:(id)a1 data:(id)a2;
- (void)performICQActionWithName:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (BOOL)presentInViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)pushInNavigationController:(id)a0 animated:(BOOL)a1;
- (void)reloadWithHeaders:(id)a0;
- (void)updateStoreDataForKey:(id)a0 value:(id)a1;

@end
