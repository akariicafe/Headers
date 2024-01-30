@class TMLJSONObject, NSString, NSDictionary, TMLContext, NSURLRequest, UIViewController;
@protocol TKNetworkTask;

@interface TKPage : NSObject {
    TMLJSONObject *_dataObject;
    TMLContext *_context;
    UIViewController *_weakViewController;
    UIViewController *_loadingViewController;
    id<TKNetworkTask> _networkTask;
    BOOL _ready;
}

@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSURLRequest *dataRequest;
@property (readonly, nonatomic) BOOL dataLoading;
@property (nonatomic) BOOL shouldShowLoading;

- (void)load;
- (void)reload;
- (void)dispose;
- (void)dealloc;
- (id)initWithViewName:(id)a0;
- (void).cxx_destruct;
- (void)loadRequest:(id)a0;
- (void)dataError;
- (id)createViewController;
- (void)dataLoaded:(id)a0 withError:(id)a1;
- (void)didFinishLoading:(id)a0 data:(id)a1 responseError:(id)a2;
- (void)didLoadData:(BOOL)a0;
- (void)hideLoadingViewController;
- (void)loadData:(id)a0 postData:(id)a1;
- (void)reloadWithDelayedShowLoading:(BOOL)a0;
- (void)showLoadingViewController;

@end
