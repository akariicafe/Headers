@class NPKAssertion, NSObject, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface NPKDoubleClickClientSuppressor : NSObject

@property (retain, nonatomic) NPKAssertion *suppressionAssertion;
@property (retain) NSMutableIndexSet *suppressionRequestTokens;
@property (nonatomic) unsigned long long nextSuppressionRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suppressorQueue;

+ (id)sharedInstance;
+ (BOOL)isSuppressingDoubleClickClients;
+ (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)a0;
+ (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* block */)a0;
- (void)_acquireSuppressionAssertionWithCompletion:(id /* block */)a0;
- (BOOL)isSuppressingDoubleClickClients;
- (void)_postSuppressionStateChanged;
- (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)a0;
- (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(id /* block */)a0;

@end
