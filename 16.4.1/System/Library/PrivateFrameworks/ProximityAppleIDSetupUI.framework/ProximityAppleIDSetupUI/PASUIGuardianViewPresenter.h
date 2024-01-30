@class CUMessageSession, UIViewController;

@interface PASUIGuardianViewPresenter : NSObject {
    void /* unknown type, empty encoding */ analytics;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ messageSessionProvider;
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ viewControllerProvider;
    void /* unknown type, empty encoding */ flowController;
    void /* unknown type, empty encoding */ cardContentView;
    void /* unknown type, empty encoding */ cardAdapter;
    void /* unknown type, empty encoding */ flowTimer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(UIViewController *))a1;
- (id)initWithSharingViewController:(id)a0;
- (void)setTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(void))a1;

@end
