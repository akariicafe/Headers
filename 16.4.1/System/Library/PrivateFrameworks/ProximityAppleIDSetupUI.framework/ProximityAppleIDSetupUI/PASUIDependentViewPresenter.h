@class CUMessageSession, UIViewController;

@interface PASUIDependentViewPresenter : NSObject {
    void /* unknown type, empty encoding */ analytics;
    void /* unknown type, empty encoding */ flowController;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ messageSessionProvider;
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ viewControllerProvider;
    void /* unknown type, empty encoding */ deviceProvider;
    void /* unknown type, empty encoding */ dependentAppleIDExchanger;
    void /* unknown type, empty encoding */ flowTimer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(UIViewController *))a1;
- (id)initWithParentViewController:(id)a0;
- (void)setTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(void))a1;

@end
