@class UIViewController, NSString, NSObject, RBSAssertion;
@protocol DKExtensionAttributes, DKRequestDelegate, DKExtensionHostAdapter, NSCopying, OS_dispatch_semaphore;

@interface DKExtensionRequest : NSObject <DKExtensionHostAdapterDelegate, DKRequest>

@property (retain, nonatomic) id<DKExtensionAttributes> extensionAttributes;
@property (retain, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (nonatomic, getter=isCanceled) BOOL canceled;
@property (retain, nonatomic) UIViewController *remoteViewController;
@property (retain, nonatomic) id<DKExtensionHostAdapter> hostAdapter;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) id payload;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *connectSemaphore;
@property (nonatomic, getter=isInterrupted) BOOL interrupted;
@property (retain, nonatomic) RBSAssertion *rbprocessAssertion;
@property (nonatomic) BOOL isAllowListed;
@property (retain, nonatomic) NSString *allowListContactMessage;
@property (weak, nonatomic) id hostServicesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DKRequestDelegate> delegate;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) id<NSCopying> requestIdentifier;

+ (id)requestWithExtensionAttributes:(id)a0;

- (void)complete;
- (void)_dismissViewControllerWithCompletion:(id /* block */)a0;
- (id)connectWithError:(id *)a0;
- (void)cancelWithError:(id)a0;
- (void)cancel;
- (void)interrupt;
- (void).cxx_destruct;
- (void)_finishWithResult:(id)a0 error:(id)a1;
- (void)completeWithPayload:(id)a0 completion:(id /* block */)a1;
- (void)_cancelTimedOutWithInfo:(id)a0;
- (BOOL)_extensionContext:(id)a0 hasEntitlement:(id)a1;
- (void)beginWithPayload:(id)a0;
- (void)cancelExtensionRequest;
- (id)initWithExtensionAttributes:(id)a0;
- (void)setNotAllowListedWithContactMessage:(id)a0;

@end
