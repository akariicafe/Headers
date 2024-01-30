@class NPKAssertion, NSObject, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface NPKDoubleClickClientSuppressor : NSObject

@property (retain, nonatomic) NPKAssertion *suppressionAssertion;
@property (retain) NSMutableIndexSet *suppressionRequestTokens;
@property (nonatomic) unsigned long long nextSuppressionRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suppressorQueue;

+ (id)sharedInstance;
+ (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(id /* block */)a0;
+ (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)a0;
+ (BOOL)isSuppressingDoubleClickClients;

- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* block */)a0;
- (void)_acquireSuppressionAssertionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(id /* block */)a0;
- (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)a0;
- (BOOL)isSuppressingDoubleClickClients;
- (void)_postSuppressionStateChanged;

@end
