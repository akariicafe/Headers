@class NSData, NSError, UIWindowScene, SKRemoteEngagementPresenterViewController, NSString, NSDictionary, NSObject, UIViewController;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SKEngagementRemoteViewTask : NSObject <SKEngagementPresenterProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SKRemoteEngagementPresenterViewController *remoteViewController;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) NSData *resultData;
@property (retain, nonatomic) NSDictionary *result;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) UIWindowScene *scene;
@property (retain, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentEngagement;
- (void)_presentViewController:(id)a0;
- (void)_unblock;
- (void)engagementTaskDidFinishWithResult:(id)a0 resultData:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)initWithRequestData:(id)a0 presentingViewController:(id)a1 windowScene:(id)a2;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
